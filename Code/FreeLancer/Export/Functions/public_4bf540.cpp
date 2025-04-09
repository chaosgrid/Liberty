#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bf540);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd5a7);

#define public_4bf580 _public_4bf580
#define public_4bf58c _public_4bf58c
#define public_4bf596 _public_4bf596
#define public_4bf5a2 _public_4bf5a2
#define public_4bf5b0 _public_4bf5b0
#define public_4bf5c4 _public_4bf5c4
#define public_4bf5da _public_4bf5da

PROC_DECLARE(0x4bf540, internal_4bf540, public_4bf540);
extern "C" NAKED register_t __cdecl internal_4bf540()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd5a7 @0x4bf542*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd5a7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5d628c
        mov edi, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0x18]
        cmp edi, eax
        mov dword ptr ss : [esp+0x20], 1
        je public_4bf596
        lea ebx, ds:[ebx]
        public_4bf580 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_4bf58c
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_4bf58c : nop
        mov eax, dword ptr ds : [esi+0x18]
        add edi, 4
        cmp edi, eax
        jne public_4bf580
        public_4bf596 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        cmp ecx, ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, ecx
        je public_4bf5b0
        public_4bf5a2 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_4bf5a2
        public_4bf5b0 : nop
        mov dword ptr ds : [esi+0x18], edx
        mov ebx, dword ptr ds : [esi+0x24]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        lea ebp, ds:[esi+0x20]
        mov byte ptr ss : [esp+0x20], 0
        je public_4bf5da
        public_4bf5c4 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [public_5c6188]
        cmp edi, ebx
        jne public_4bf5c4
        public_4bf5da : nop
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_5b7e1d
        xor edi, edi
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4bf540)
    }
}

#undef public_4bf580
#undef public_4bf58c
#undef public_4bf596
#undef public_4bf5a2
#undef public_4bf5b0
#undef public_4bf5c4
#undef public_4bf5da
