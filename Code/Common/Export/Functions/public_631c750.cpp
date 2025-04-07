#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631c750);

#define public_631c785 _public_631c785
#define public_631c7a2 _public_631c7a2
#define public_631c7bf _public_631c7bf
#define public_631c7dc _public_631c7dc
#define public_631c7f9 _public_631c7f9
#define public_631c816 _public_631c816
#define public_631c833 _public_631c833
#define public_631c859 _public_631c859

PROC_DECLARE(0x631c750, internal_631c750, public_631c750);
extern "C" NAKED register_t __cdecl internal_631c750()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        or ebx, 0xFFFFFFFF
        test eax, eax
        push edi
        je public_631c859
        cmp byte ptr ds : [eax], 0
        je public_631c859
        mov edi, offset public_63995c0
        mov esi, eax
        mov ecx, 5
        xor edx, edx
        repe cmpsb
        jne public_631c785
        pop edi
        xor ebx, ebx
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_631c785 : nop
        mov edi, offset public_63a3be4
        mov esi, eax
        mov ecx, 0xA
        xor edx, edx
        repe cmpsb
        jne public_631c7a2
        pop edi
        mov ebx, 1
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_631c7a2 : nop
        mov edi, offset public_63a1858
        mov esi, eax
        mov ecx, 6
        xor edx, edx
        repe cmpsb
        jne public_631c7bf
        pop edi
        mov ebx, 2
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_631c7bf : nop
        mov edi, offset public_639dcc0
        mov esi, eax
        mov ecx, 9
        xor edx, edx
        repe cmpsb
        jne public_631c7dc
        pop edi
        mov ebx, 3
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_631c7dc : nop
        mov edi, offset public_6399804
        mov esi, eax
        mov ecx, 0xA
        xor edx, edx
        repe cmpsb
        jne public_631c7f9
        pop edi
        mov ebx, 4
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_631c7f9 : nop
        mov edi, offset public_63a3bd4
        mov esi, eax
        mov ecx, 0xF
        xor edx, edx
        repe cmpsb
        jne public_631c816
        pop edi
        mov ebx, 5
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_631c816 : nop
        mov edi, offset public_63a3bcc
        mov esi, eax
        mov ecx, 5
        xor edx, edx
        repe cmpsb
        jne public_631c833
        pop edi
        mov ebx, 6
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_631c833 : nop
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0xBB
/*FIXUP push offset public_63a3b48 @0x631c83e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3b48
        mov ecx, 0x100002
/*FIXUP push offset public_63a3b94 @0x631c848*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3b94
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        public_631c859 : nop
        pop edi
        or ebx, 0xFFFFFFFF
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x631c750)
    }
}

#undef public_631c785
#undef public_631c7a2
#undef public_631c7bf
#undef public_631c7dc
#undef public_631c7f9
#undef public_631c816
#undef public_631c833
#undef public_631c859
