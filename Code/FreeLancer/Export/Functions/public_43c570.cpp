#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c570);
CLANG_FORWARD_PROC_SYMBOL(public_5afe80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9458);

#define public_43c598 _public_43c598
#define public_43c5a1 _public_43c5a1
#define public_43c5a3 _public_43c5a3
#define public_43c5bf _public_43c5bf
#define public_43c5c4 _public_43c5c4
#define public_43c5d0 _public_43c5d0
#define public_43c5e3 _public_43c5e3
#define public_43c5ea _public_43c5ea
#define public_43c5ee _public_43c5ee
#define public_43c604 _public_43c604
#define public_43c615 _public_43c615

PROC_DECLARE(0x43c570, internal_43c570, public_43c570);
extern "C" NAKED register_t __cdecl internal_43c570()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9458 @0x43c572*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9458
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        xor esi, esi
        push ebp
        public_43c598 : nop
        cmp esi, ebx
        jne public_43c5a1
        mov esi, dword ptr ds : [edi+4]
        jmp public_43c5a3
        public_43c5a1 : nop
        mov esi, dword ptr ds : [esi]
        public_43c5a3 : nop
        cmp esi, ebx
        je public_43c5c4
        mov ebp, dword ptr ds : [esi+8]
        cmp ebp, ebx
        je public_43c5bf
        mov ecx, ebp
        call dword ptr ds : [public_5c6104]
        push ebp
        call public_5b7e1d
        add esp, 4
        public_43c5bf : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_43c598
        public_43c5c4 : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        pop ebp
        je public_43c5ee
        lea esp, ss:[esp]
        public_43c5d0 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov ecx, esi
        mov esi, dword ptr ds : [esi]
        je public_43c5e3
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [edi+0x10], ecx
        jmp public_43c5ea
        public_43c5e3 : nop
        push 1
        call public_5afe80
        public_43c5ea : nop
        cmp esi, ebx
        jne public_43c5d0
        public_43c5ee : nop
        mov esi, dword ptr ds : [edi+0x10]
        cmp esi, ebx
        mov byte ptr ds : [edi+0x14], bl
        mov dword ptr ds : [edi], offset public_5cb034
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        je public_43c615
        public_43c604 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp esi, ebx
        jne public_43c604
        public_43c615 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x10], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x43c570)
    }
}

#undef public_43c598
#undef public_43c5a1
#undef public_43c5a3
#undef public_43c5bf
#undef public_43c5c4
#undef public_43c5d0
#undef public_43c5e3
#undef public_43c5ea
#undef public_43c5ee
#undef public_43c604
#undef public_43c615
