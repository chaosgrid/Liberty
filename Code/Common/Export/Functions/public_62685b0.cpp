#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62685c4 _public_62685c4
#define public_62685ef _public_62685ef
#define public_62685f1 _public_62685f1
#define public_62685f6 _public_62685f6

PROC_DECLARE(0x62685b0, internal_62685b0, public_62685b0);
extern "C" NAKED register_t __cdecl internal_62685b0()
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
        je public_62685f6
        push ebp
        mov bp, word ptr ss : [esp+0x1A]
        public_62685c4 : nop
        cmp word ptr ds : [esi+0xA], bp
        je public_62685ef
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
        jmp public_62685f1
        public_62685ef : nop
        mov esi, dword ptr ds : [esi]
        public_62685f1 : nop
        cmp esi, ebx
        jne public_62685c4
        pop ebp
        public_62685f6 : nop
        pop edi
        pop esi
        pop ebx
        ret 0x24
        UNREACHABLE_TRAP(0x62685b0)
    }
}

#undef public_62685c4
#undef public_62685ef
#undef public_62685f1
#undef public_62685f6
