#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_440ac0);
CLANG_FORWARD_PROC_SYMBOL(public_441700);
CLANG_FORWARD_PROC_SYMBOL(public_442200);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_55e290);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_442247 _public_442247
#define public_442257 _public_442257
#define public_44226b _public_44226b
#define public_442289 _public_442289
#define public_44229c _public_44229c
#define public_4422a4 _public_4422a4

PROC_DECLARE(0x442200, internal_442200, public_442200);
extern "C" NAKED register_t __cdecl internal_442200()
{
    __asm
    {
        push ebx
        push esi
        push edi
/*FIXUP push offset public_5cb548 @0x442203*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb548
        call public_59da10
        add esp, 4
        test eax, eax
        je public_4422a4
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_4422a4
        mov al, byte ptr ds : [esi+0x3D4]
        test al, al
        jne public_4422a4
        lea edi, ds:[esi+0x32C]
        mov ecx, edi
        call public_55e280
        test al, al
        je public_442247
        mov ecx, edi
        call public_55e290
        public_442247 : nop
        mov edx, dword ptr ds : [esi+0x380]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_4422a4
        mov edi, dword ptr ss : [esp+0x10]
        public_442257 : nop
        mov ebx, dword ptr ds : [eax+0x38]
        cmp ebx, edi
        lea ecx, ds:[eax+8]
        je public_44226b
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_442257
        pop edi
        pop esi
        pop ebx
        ret 
        public_44226b : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        test eax, eax
        je public_44229c
        mov edx, dword ptr ds : [eax+0x18]
        test edx, edx
        je public_44229c
        mov eax, dword ptr ds : [esi+0x3B8]
        test eax, eax
        jne public_442289
        mov dword ptr ds : [esi+0x3B8], ecx
        public_442289 : nop
        mov eax, dword ptr ds : [esi+0x3B8]
        push ecx
        push eax
        mov ecx, esi
        call public_441700
        pop edi
        pop esi
        pop ebx
        ret 
        public_44229c : nop
        push ecx
        mov ecx, esi
        call public_440ac0
        public_4422a4 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x442200)
    }
}

#undef public_442247
#undef public_442257
#undef public_44226b
#undef public_442289
#undef public_44229c
#undef public_4422a4
