#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63487f0);
CLANG_FORWARD_PROC_SYMBOL(public_6348b80);
CLANG_FORWARD_PROC_SYMBOL(public_6348c10);
CLANG_FORWARD_PROC_SYMBOL(public_6348d80);
CLANG_FORWARD_PROC_SYMBOL(public_6349040);
CLANG_FORWARD_PROC_SYMBOL(public_6349180);
CLANG_FORWARD_PROC_SYMBOL(public_6349490);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6349073 _public_6349073
#define public_63490bb _public_63490bb
#define public_63490c5 _public_63490c5
#define public_63490c7 _public_63490c7
#define public_63490d7 _public_63490d7
#define public_63490f1 _public_63490f1
#define public_6349106 _public_6349106

PROC_DECLARE(0x6349040, internal_6349040, public_6349040);
extern "C" NAKED register_t __cdecl internal_6349040()
{
    __asm
    {
        sub esp, 0x10
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebp
        call dword ptr ds : [eax+8]
        xor ebp, ebp
        mov bp, word ptr ds : [eax+2]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+8], 8
        dec ebp
        js public_6349106
        push esi
        push edi
        public_6349073 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [ecx+ebp*4]
        test byte ptr ds : [edi], 0xC
        jne public_63490d7
        mov edx, dword ptr ds : [edi+0x60]
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edi+0x15C]
        shl edx, 0x18
        sar edx, 0x18
        and ecx, edx
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], ecx
        je public_63490c5
        cmp esi, ebx
        je public_63490c7
        push esi
        mov ecx, ebx
        call public_6348c10
        test esi, esi
        je public_63490bb
        mov ecx, esi
        call public_6348d80
        push esi
        call public_6391d5a
        add esp, 4
        public_63490bb : nop
        mov dword ptr ss : [esp+0x14], 1
        jmp public_63490c7
        public_63490c5 : nop
        mov ebx, esi
        public_63490c7 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        mov ecx, edi
        call public_6349180
        mov eax, dword ptr ss : [esp+0x18]
        public_63490d7 : nop
        dec ebp
        jns public_6349073
        cmp dword ptr ss : [esp+0x14], 1
        pop edi
        pop esi
        jne public_63490f1
        mov ecx, ebx
        call public_6348b80
        mov ecx, ebx
        call public_63487f0
        public_63490f1 : nop
        cmp dword ptr ss : [esp+8], 8
        jge public_6349106
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push edx
        mov ecx, ebx
        call public_6349490
        public_6349106 : nop
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6349040)
    }
}

#undef public_6349073
#undef public_63490bb
#undef public_63490c5
#undef public_63490c7
#undef public_63490d7
#undef public_63490f1
#undef public_6349106
