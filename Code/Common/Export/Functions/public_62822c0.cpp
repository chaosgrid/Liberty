#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bbb20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62822d0 _public_62822d0
#define public_6282306 _public_6282306
#define public_6282308 _public_6282308
#define public_628230c _public_628230c

PROC_DECLARE(0x62822c0, internal_62822c0, public_62822c0);
extern "C" NAKED register_t __cdecl internal_62822c0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_628230c
        mov edi, edi
        public_62822d0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ds:[esi+8]
        call public_62bbb20
        test al, al
        je public_6282306
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        jmp public_6282308
        public_6282306 : nop
        mov esi, dword ptr ds : [esi]
        public_6282308 : nop
        cmp esi, ebx
        jne public_62822d0
        public_628230c : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62822c0)
    }
}

#undef public_62822d0
#undef public_6282306
#undef public_6282308
#undef public_628230c
