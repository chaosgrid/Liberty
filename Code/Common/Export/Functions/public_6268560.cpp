#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6268573 _public_6268573
#define public_62685a2 _public_62685a2
#define public_62685a4 _public_62685a4
#define public_62685a9 _public_62685a9

PROC_DECLARE(0x6268560, internal_6268560, public_6268560);
extern "C" NAKED register_t __cdecl internal_6268560()
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
        je public_62685a9
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        public_6268573 : nop
        mov ax, word ptr ds : [esi+0xA]
        cmp ax, word ptr ss : [ebp+2]
        jne public_62685a2
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
        jmp public_62685a4
        public_62685a2 : nop
        mov esi, dword ptr ds : [esi]
        public_62685a4 : nop
        cmp esi, ebx
        jne public_6268573
        pop ebp
        public_62685a9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6268560)
    }
}

#undef public_6268573
#undef public_62685a2
#undef public_62685a4
#undef public_62685a9
