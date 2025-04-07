#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d345c8);

#define public_6d345ef _public_6d345ef
#define public_6d34603 _public_6d34603
#define public_6d34639 _public_6d34639
#define public_6d34655 _public_6d34655

PROC_DECLARE(0x6d345c8, internal_6d345c8, public_6d345c8);
extern "C" NAKED register_t __cdecl internal_6d345c8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        mov ebx, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+0x18]
        push esi
        mov esi, dword ptr ds : [eax+0x105C]
        push edi
        mov edi, dword ptr ds : [eax+0x1050]
        imul esi, edi
        add esi, edx
        jmp public_6d34655
        public_6d345ef : nop
        mov eax, dword ptr ds : [eax+0x1058]
        add eax, edx
        add edi, edx
        mov dword ptr ss : [ebp-8], ebx
        mov dword ptr ss : [ebp-4], edx
        cmp edx, eax
        jmp public_6d34639
        public_6d34603 : nop
        movzx edi, byte ptr ds : [edi+1]
        mov ebx, dword ptr ss : [ebp-4]
        movzx ebx, byte ptr ds : [ebx+1]
        add edi, ebx
        mov ebx, dword ptr ss : [ebp-0xC]
        movzx ebx, byte ptr ds : [ebx]
        add edi, ebx
        mov ebx, dword ptr ss : [ebp-4]
        movzx ebx, byte ptr ds : [ebx]
        add dword ptr ss : [ebp-4], 2
        lea ebx, ds:[edi+ebx+2]
        mov edi, dword ptr ss : [ebp-8]
        shr ebx, 2
        inc dword ptr ss : [ebp-8]
        mov byte ptr ds : [edi], bl
        mov edi, dword ptr ss : [ebp-0xC]
        inc edi
        inc edi
        cmp dword ptr ss : [ebp-4], eax
        public_6d34639 : nop
        mov dword ptr ss : [ebp-0xC], edi
        jb public_6d34603
        mov eax, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ss : [ebp-0x10]
        add ebx, dword ptr ds : [eax+0x1050]
        mov eax, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax+0x1050]
        lea edx, ds:[edx+edi*2]
        public_6d34655 : nop
        cmp edx, esi
        mov dword ptr ss : [ebp-0x10], ebx
        jb public_6d345ef
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d345c8)
    }
}

#undef public_6d345ef
#undef public_6d34603
#undef public_6d34639
#undef public_6d34655
