#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4353a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4353b0 _public_4353b0
#define public_4353c1 _public_4353c1
#define public_4353cb _public_4353cb
#define public_4353ec _public_4353ec
#define public_4353f1 _public_4353f1
#define public_435417 _public_435417
#define public_435419 _public_435419
#define public_43541e _public_43541e
#define public_435437 _public_435437
#define public_435480 _public_435480
#define public_4354a5 _public_4354a5

PROC_DECLARE(0x4353a0, internal_4353a0, public_4353a0);
extern "C" NAKED register_t __cdecl internal_4353a0()
{
    __asm
    {
        sub esp, 0x404
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        lea esp, ss:[esp]
        public_4353b0 : nop
        mov ecx, dword ptr ds : [ebx+0x24]
        mov eax, dword ptr ds : [ecx]
        xor edi, edi
        xor ebp, ebp
        cmp eax, ecx
        je public_4354a5
        public_4353c1 : nop
        test edi, edi
        mov ecx, dword ptr ds : [eax+8]
        jne public_4353cb
        mov edi, dword ptr ds : [ecx+0x18]
        public_4353cb : nop
        cmp edi, dword ptr ds : [ecx+0x18]
        jne public_435417
        cmp ebp, 0x100
        jge public_43541e
        mov edx, dword ptr ds : [ecx+0x14]
        test edx, edx
        jne public_4353f1
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_4353ec
        mov edx, dword ptr ds : [public_5c7078]
        public_4353ec : nop
        mov dword ptr ss : [esp+ebp*4+0x14], edx
        inc ebp
        public_4353f1 : nop
        inc dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+0x28]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+0x28], eax
        mov eax, esi
        jmp public_435419
        public_435417 : nop
        mov eax, dword ptr ds : [eax]
        public_435419 : nop
        cmp eax, dword ptr ds : [ebx+0x24]
        jne public_4353c1
        public_43541e : nop
        test ebp, ebp
        jle public_4353b0
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        jne public_435437
        mov esi, dword ptr ds : [public_5c7078]
        public_435437 : nop
        push 0
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        call dword ptr ds : [public_5c607c]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        test ecx, ecx
        je public_435480
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ebp
        lea esi, ss:[esp+0x18]
        push esi
        push ecx
        mov ecx, dword ptr ds : [ebx+0x2C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x78]
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [public_5c6074]
        add esp, 4
        jmp public_4353b0
        nop 
        lea esp, ss:[esp]
        public_435480 : nop
        push esi
        push 0x1C2
/*FIXUP push offset public_5caddc @0x435486*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caddc
        mov eax, 0x100002
/*FIXUP push offset public_5cadb0 @0x435490*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cadb0
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_4353b0
        public_4354a5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x404
        ret 
        UNREACHABLE_TRAP(0x4353a0)
    }
}

#undef public_4353b0
#undef public_4353c1
#undef public_4353cb
#undef public_4353ec
#undef public_4353f1
#undef public_435417
#undef public_435419
#undef public_43541e
#undef public_435437
#undef public_435480
#undef public_4354a5
