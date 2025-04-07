#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_56a230);

#define public_56a284 _public_56a284
#define public_56a2aa _public_56a2aa
#define public_56a2b5 _public_56a2b5
#define public_56a2da _public_56a2da

PROC_DECLARE(0x56a230, internal_56a230, public_56a230);
extern "C" NAKED register_t __cdecl internal_56a230()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0x399]
/*FIXUP push offset public_67bd40 @0x56a23a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67bd40
        push eax
        call dword ptr ds : [public_5c6bd4]
        add esp, 8
        xor edx, edx
        test al, al
        mov eax, dword ptr ds : [esi+0x2C0]
        mov cl, byte ptr ds : [eax+0x6C]
        mov bl, 1
        je public_56a284
        and cl, 0xFE
        mov byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x2C8]
        and byte ptr ds : [eax+0x6C], 0xFE
        mov ecx, dword ptr ds : [esi+0x2C0]
        mov byte ptr ds : [ecx+0x498], dl
        mov eax, dword ptr ds : [esi+0x2C8]
        mov byte ptr ds : [eax+0x498], dl
        jmp public_56a2aa
        public_56a284 : nop
        or cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x2C8]
        or byte ptr ds : [eax+0x6C], bl
        mov ecx, dword ptr ds : [esi+0x2C0]
        mov byte ptr ds : [ecx+0x498], bl
        mov eax, dword ptr ds : [esi+0x2C8]
        mov byte ptr ds : [eax+0x498], bl
        public_56a2aa : nop
        mov eax, dword ptr ds : [public_67e970]
        xor ecx, ecx
        cmp eax, edx
        je public_56a2da
        public_56a2b5 : nop
        mov eax, dword ptr ds : [eax]
        inc ecx
        cmp eax, edx
        jne public_56a2b5
        cmp ecx, 5
        jl public_56a2da
        mov eax, dword ptr ds : [esi+0x2C4]
        and byte ptr ds : [eax+0x6C], 0xFE
        mov ecx, dword ptr ds : [esi+0x2C4]
        pop esi
        mov byte ptr ds : [ecx+0x498], dl
        pop ebx
        ret 
        public_56a2da : nop
        mov eax, dword ptr ds : [esi+0x2C4]
        or byte ptr ds : [eax+0x6C], bl
        mov edx, dword ptr ds : [esi+0x2C4]
        pop esi
        mov byte ptr ds : [edx+0x498], bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x56a230)
    }
}

#undef public_56a284
#undef public_56a2aa
#undef public_56a2b5
#undef public_56a2da
