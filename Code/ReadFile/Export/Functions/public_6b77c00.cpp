#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b77cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);

#define public_6b77c43 _public_6b77c43
#define public_6b77c59 _public_6b77c59
#define public_6b77c64 _public_6b77c64
#define public_6b77c6d _public_6b77c6d
#define public_6b77cb8 _public_6b77cb8

PROC_DECLARE(0x6b77c00, internal_6b77c00, public_6b77c00);
extern "C" NAKED register_t __cdecl internal_6b77c00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0x108
        test ecx, ecx
        mov eax, 0xFFFFFFFE
        je public_6b77cb8
        push ebx
        mov ebx, dword ptr ss : [esp+0x110]
        push ebp
        push esi
        mov eax, dword ptr ds : [ebx+0x10C]
        lea ebp, ds:[ebx+0x10C]
        test eax, eax
        push edi
        je public_6b77c6d
        mov ecx, dword ptr ds : [eax-4]
        lea edi, ds:[eax-4]
        lea esi, ds:[eax+ecx*4]
        dec ecx
        js public_6b77c64
        inc ecx
        mov dword ptr ss : [esp+0x10], ecx
        public_6b77c43 : nop
        mov eax, dword ptr ds : [esi-4]
        sub esi, 4
        test eax, eax
        je public_6b77c59
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6b77c59 : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6b77c43
        public_6b77c64 : nop
        push edi
        call public_6b782a0
        add esp, 4
        public_6b77c6d : nop
        mov edx, dword ptr ss : [esp+0x120]
        lea esi, ds:[ebx+4]
        push 0x104
        push edx
        push esi
        mov dword ptr ds : [ebx+0x110], 0
        mov byte ptr ds : [esi], 0
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        mov ecx, 0x41
        lea edi, ss:[esp+0x14]
        lea eax, ss:[esp+0x14]
        push 0
        push ebp
        rep movsd
        push eax
        call public_6b77cd0
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x110], eax
        pop ebp
        xor eax, eax
        pop ebx
        public_6b77cb8 : nop
        add esp, 0x108
        ret 8
        UNREACHABLE_TRAP(0x6b77c00)
    }
}

#undef public_6b77c43
#undef public_6b77c59
#undef public_6b77c64
#undef public_6b77c6d
#undef public_6b77cb8
