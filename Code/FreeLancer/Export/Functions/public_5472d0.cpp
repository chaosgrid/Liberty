#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5472d0);

#define public_54730a _public_54730a
#define public_54731e _public_54731e
#define public_547321 _public_547321
#define public_547392 _public_547392
#define public_5473a6 _public_5473a6
#define public_5473a9 _public_5473a9
#define public_5473c1 _public_5473c1
#define public_5473d2 _public_5473d2
#define public_5473e7 _public_5473e7

PROC_DECLARE(0x5472d0, internal_5472d0, public_5472d0);
extern "C" NAKED register_t __cdecl internal_5472d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
/*FIXUP push offset public_5c8ce0 @0x5472d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        call dword ptr ds : [public_5c71c8]
        mov esi, dword ptr ss : [esp+0x1C]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        lea edi, ds:[ebx+1]
        add esp, 4
        cmp edi, eax
        jbe public_547321
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_54730a
        lea ecx, ds:[edi+edi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi], eax
        jmp public_54731e
        public_54730a : nop
        lea edx, ds:[edi+edi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_54731e : nop
        mov dword ptr ds : [esi+4], edi
        public_547321 : nop
        mov eax, dword ptr ds : [esi]
        push ebx
/*FIXUP push offset public_5c8ce0 @0x547324*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push eax
        call dword ptr ds : [public_5c71c0]
        mov ecx, dword ptr ds : [esi]
        mov word ptr ds : [ecx+ebx*2], 0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        test ecx, ecx
        je public_5473d2
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_5473d2
        call dword ptr ds : [public_5c644c]
        mov ebp, eax
        test ebp, ebp
        je public_5473c1
        push ebp
        call dword ptr ds : [public_5c71c8]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        lea edi, ds:[ebx+1]
        add esp, 4
        cmp edi, eax
        jbe public_5473a9
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_547392
        lea ecx, ds:[edi+edi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi], eax
        jmp public_5473a6
        public_547392 : nop
        lea edx, ds:[edi+edi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_5473a6 : nop
        mov dword ptr ds : [esi+4], edi
        public_5473a9 : nop
        mov eax, dword ptr ds : [esi]
        push ebx
        push ebp
        push eax
        call dword ptr ds : [public_5c71c0]
        mov ecx, dword ptr ds : [esi]
        add esp, 0xC
        mov word ptr ds : [ecx+ebx*2], 0
        jmp public_5473d2
        public_5473c1 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_5473e7
        cmp word ptr ds : [eax], 0
        je public_5473d2
        mov word ptr ds : [eax], 0
        public_5473d2 : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        je public_5473e7
        push esi
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_5473e7 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5472d0)
    }
}

#undef public_54730a
#undef public_54731e
#undef public_547321
#undef public_547392
#undef public_5473a6
#undef public_5473a9
#undef public_5473c1
#undef public_5473d2
#undef public_5473e7
