#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_483df0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4670);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c4900);

#define public_483e60 _public_483e60
#define public_483e7e _public_483e7e
#define public_483e87 _public_483e87
#define public_483e97 _public_483e97
#define public_483ec1 _public_483ec1

PROC_DECLARE(0x483df0, internal_483df0, public_483df0);
extern "C" NAKED register_t __cdecl internal_483df0()
{
    __asm
    {
        sub esp, 0x138
        push ebx
        push esi
        push edi
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        mov esi, eax
        xor ebx, ebx
        add esp, 4
        cmp esi, ebx
        je public_483e87
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
        mov dword ptr ss : [esp+0xC], eax
        call dword ptr ds : [edx+0x3C]
        xor edi, edi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        jbe public_483e87
        mov edi, edi
        public_483e60 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x40]
        test al, al
        je public_483e7e
        mov edx, dword ptr ss : [esp+0xC]
        cmp dword ptr ss : [esp+0xAC], edx
        je public_483e97
        public_483e7e : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc edi
        cmp edi, eax
        jb public_483e60
        public_483e87 : nop
        fld dword ptr ds : [public_5c75dc]
        pop edi
        pop esi
        pop ebx
        add esp, 0x138
        ret 
        public_483e97 : nop
        call public_4c4670
        or ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], eax
        xor eax, eax
        lea edi, ss:[esp+0x8C]
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x10
        mov byte ptr ss : [esp+0x1C], bl
        jb public_483ec1
        mov eax, 0xF
        public_483ec1 : nop
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
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_5c63bc]
        add esp, 0x10
        test eax, eax
        jne public_483e87
        fld dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        add esp, 0x138
        ret 
        UNREACHABLE_TRAP(0x483df0)
    }
}

#undef public_483e60
#undef public_483e7e
#undef public_483e87
#undef public_483e97
#undef public_483ec1
