#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);

#define public_63441cf _public_63441cf
#define public_63441e3 _public_63441e3
#define public_6344201 _public_6344201

PROC_DECLARE(0x63441a0, internal_63441a0, public_63441a0);
extern "C" NAKED register_t __cdecl internal_63441a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push edi
        lea ecx, ds:[eax*8+8]
        push ecx
        call public_6343f70
        xor edx, edx
        mov dx, word ptr ds : [esi]
        shl dx, 1
        add esp, 4
        mov edi, eax
        xor eax, eax
        inc edx
        cmp word ptr ds : [esi+2], ax
        mov word ptr ds : [esi], dx
        jbe public_63441e3
        public_63441cf : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+eax*4]
        xor ecx, ecx
        mov dword ptr ds : [edi+eax*4], edx
        mov cx, word ptr ds : [esi+2]
        inc eax
        cmp eax, ecx
        jl public_63441cf
        public_63441e3 : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ds:[esi+8]
        cmp eax, edx
        je public_6344201
        test eax, eax
        je public_6344201
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+4], 0
        public_6344201 : nop
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63441a0)
    }
}

#undef public_63441cf
#undef public_63441e3
#undef public_6344201
