#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_483f30);
CLANG_FORWARD_PROC_SYMBOL(public_4c4670);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c4900);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_483fc0 _public_483fc0
#define public_483fde _public_483fde
#define public_483ff1 _public_483ff1
#define public_484017 _public_484017
#define public_484061 _public_484061
#define public_484077 _public_484077
#define public_484084 _public_484084

PROC_DECLARE(0x483f30, internal_483f30, public_483f30);
extern "C" NAKED register_t __cdecl internal_483f30()
{
    __asm
    {
        sub esp, 0x138
        push ebx
        push esi
        push edi
/*FIXUP push offset public_5cb7c4 @0x483f39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7c4
        call public_59da10
        xor ebx, ebx
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0xC], eax
        je public_484084
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_484084
        call public_4c4900
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ss : [esp+0x30], bl
        mov dword ptr ss : [esp+0x88], ebx
        mov byte ptr ss : [esp+0x8C], bl
        mov dword ptr ss : [esp+0xB8], ebx
        mov byte ptr ss : [esp+0xBC], bl
        mov dword ptr ss : [esp+0xFC], ebx
        mov byte ptr ss : [esp+0x100], bl
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [edx+0x3C]
        xor edi, edi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        jbe public_484084
        nop 
        public_483fc0 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x40]
        test al, al
        je public_483fde
        mov edx, dword ptr ss : [esp+0x10]
        cmp dword ptr ss : [esp+0xAC], edx
        je public_483ff1
        public_483fde : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc edi
        cmp edi, eax
        jb public_483fc0
        pop edi
        pop esi
        pop ebx
        add esp, 0x138
        ret 
        public_483ff1 : nop
        call public_4c4670
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x8C]
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x10
        mov byte ptr ss : [esp+0x1C], bl
        jb public_484017
        mov eax, 0xF
        public_484017 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea esi, ss:[esp+0x8C]
        lea edi, ss:[esp+0x1C]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x1C], bl
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_5c62a0]
        add esp, 4
        cmp eax, 0xFFFFFFFF
        je public_484084
        mov esi, dword ptr ss : [esp+0x148]
        xor ecx, ecx
        cmp esi, ebx
        jle public_484084
        mov edx, dword ptr ss : [esp+0x14C]
        public_484061 : nop
        cmp dword ptr ds : [edx], eax
        je public_484077
        add edx, 8
        inc ecx
        cmp ecx, esi
        jl public_484061
        pop edi
        pop esi
        pop ebx
        add esp, 0x138
        ret 
        public_484077 : nop
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+0x990], ecx
        public_484084 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x138
        ret 
        UNREACHABLE_TRAP(0x483f30)
    }
}

#undef public_483fc0
#undef public_483fde
#undef public_483ff1
#undef public_484017
#undef public_484061
#undef public_484077
#undef public_484084
