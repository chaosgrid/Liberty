#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334400);

#define public_6276430 _public_6276430
#define public_627643e _public_627643e
#define public_6276449 _public_6276449
#define public_6276470 _public_6276470
#define public_6276473 _public_6276473
#define public_62764a9 _public_62764a9
#define public_62764c3 _public_62764c3

PROC_DECLARE(0x6276420, internal_6276420, public_6276420);
extern "C" NAKED register_t __cdecl internal_6276420()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        xor ebp, ebp
        mov esi, ecx
        xor edi, edi
        mov edi, edi
        public_6276430 : nop
        mov ecx, dword ptr ds : [esi+0x168]
        test ecx, ecx
        jne public_627643e
        xor eax, eax
        jmp public_6276449
        public_627643e : nop
        mov eax, dword ptr ds : [esi+0x16C]
        sub eax, ecx
        sar eax, 2
        public_6276449 : nop
        cmp edi, eax
        jge public_6276473
        mov eax, dword ptr ds : [esi+0x168]
        mov eax, dword ptr ds : [eax+edi*4]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jne public_6276470
        mov edx, dword ptr ds : [esi+0x168]
        mov ebp, dword ptr ds : [edx+edi*4]
        public_6276470 : nop
        inc edi
        jmp public_6276430
        public_6276473 : nop
        test ebp, ebp
        jne public_62764a9
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        push ecx
        push ebx
        push edx
        push 0x5A8
/*FIXUP push offset public_639a188 @0x6276486*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100001
/*FIXUP push offset public_639a0e0 @0x6276490*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a0e0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x1C
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        public_62764a9 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_62764c3
        cmp dword ptr ds : [eax], 0
        jne public_62764c3
        mov ecx, dword ptr ss : [ebp]
        push ecx
        push eax
        call public_6334400
        add esp, 8
        public_62764c3 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        lea esi, ss:[ebp+4]
        mov ecx, 0xC
        rep movsd
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6276420)
    }
}

#undef public_6276430
#undef public_627643e
#undef public_6276449
#undef public_6276470
#undef public_6276473
#undef public_62764a9
#undef public_62764c3
