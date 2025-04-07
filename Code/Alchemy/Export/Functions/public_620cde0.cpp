#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a1d0);
CLANG_FORWARD_PROC_SYMBOL(public_620a730);
CLANG_FORWARD_PROC_SYMBOL(public_620a940);
CLANG_FORWARD_PROC_SYMBOL(public_620ca50);
CLANG_FORWARD_PROC_SYMBOL(public_620cde0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620ce0d _public_620ce0d
#define public_620ce19 _public_620ce19
#define public_620ce24 _public_620ce24
#define public_620ce2c _public_620ce2c
#define public_620ce30 _public_620ce30
#define public_620ce3f _public_620ce3f
#define public_620ce67 _public_620ce67
#define public_620ce77 _public_620ce77

PROC_DECLARE(0x620cde0, internal_620cde0, public_620cde0);
extern "C" NAKED register_t __cdecl internal_620cde0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [ecx+0xC]
        push esi
        lea esi, ds:[ecx+8]
        test ebx, ebx
        mov dword ptr ds : [esi], offset public_624bb10
        je public_620ce77
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        inc edi
        jns public_620ce2c
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jg public_620ce0d
        push 0
        mov ecx, esi
        call public_620a730
        public_620ce0d : nop
        mov eax, dword ptr ds : [esi+4]
        test edi, edi
        lea ebx, ds:[eax+edi*8]
        jge public_620ce3f
        neg edi
        public_620ce19 : nop
        test ebx, ebx
        je public_620ce24
        mov ecx, ebx
        call public_620a940
        public_620ce24 : nop
        add ebx, 8
        dec edi
        jne public_620ce19
        jmp public_620ce3f
        public_620ce2c : nop
        test edi, edi
        jle public_620ce3f
        public_620ce30 : nop
        push 0
        mov ecx, ebx
        call public_620a1d0
        add ebx, 8
        dec edi
        jne public_620ce30
        public_620ce3f : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        test eax, eax
        pop edi
        je public_620ce67
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push 0
        push ecx
        call public_620ca50
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], 0
        public_620ce67 : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_620ce77
        push esi
        call public_62460e0
        add esp, 4
        public_620ce77 : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x620cde0)
    }
}

#undef public_620ce0d
#undef public_620ce19
#undef public_620ce24
#undef public_620ce2c
#undef public_620ce30
#undef public_620ce3f
#undef public_620ce67
#undef public_620ce77
