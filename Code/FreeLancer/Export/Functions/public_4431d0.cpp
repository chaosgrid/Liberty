#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4431d0);
CLANG_FORWARD_PROC_SYMBOL(public_4435e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_443243 _public_443243
#define public_443257 _public_443257
#define public_44325d _public_44325d
#define public_443270 _public_443270
#define public_4432b1 _public_4432b1
#define public_4432ca _public_4432ca
#define public_4432dd _public_4432dd
#define public_4432e8 _public_4432e8
#define public_4432eb _public_4432eb
#define public_4432f0 _public_4432f0
#define public_443319 _public_443319
#define public_443332 _public_443332
#define public_443345 _public_443345
#define public_44334f _public_44334f
#define public_443372 _public_443372
#define public_44338a _public_44338a
#define public_44339d _public_44339d
#define public_4433aa _public_4433aa
#define public_4433ac _public_4433ac
#define public_4433b2 _public_4433b2
#define public_4433db _public_4433db
#define public_4433ee _public_4433ee
#define public_4433f9 _public_4433f9
#define public_4433fc _public_4433fc
#define public_4433fe _public_4433fe
#define public_443401 _public_443401
#define public_44340d _public_44340d

PROC_DECLARE(0x4431d0, internal_4431d0, public_4431d0);
extern "C" NAKED register_t __cdecl internal_4431d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x20], 0
        mov byte ptr ds : [ebx+0x21], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_4435e0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_443243
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_443243
        lea ecx, ds:[edi+0xC]
        push ecx
        push ebp
        call dword ptr ds : [public_5c6fa4]
        add esp, 8
        test al, al
        jne public_443243
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_44325d
        mov dword ptr ds : [eax+8], ebx
        jmp public_44325d
        public_443243 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_443257
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_44325d
        public_443257 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_44325d
        mov dword ptr ds : [eax], ebx
        public_44325d : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_44340d
        nop 
        lea esp, ss:[esp]
        public_443270 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_44340d
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_44334f
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_4432b1
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_443401
        public_4432b1 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_4432f0
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_4432ca
        mov dword ptr ds : [edx+4], eax
        public_4432ca : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4432dd
        mov dword ptr ds : [edx+4], ecx
        jmp public_4432eb
        public_4432dd : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_4432e8
        mov dword ptr ds : [edx], ecx
        jmp public_4432eb
        public_4432e8 : nop
        mov dword ptr ds : [edx+8], ecx
        public_4432eb : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_4432f0 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_443319
        mov dword ptr ds : [edi+4], ecx
        public_443319 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_443332
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4433fe
        public_443332 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_443345
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4433fe
        public_443345 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4433fe
        public_44334f : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_443372
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_443401
        public_443372 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_4433b2
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_44338a
        mov dword ptr ds : [edx+4], eax
        public_44338a : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_44339d
        mov dword ptr ds : [edx+4], ecx
        jmp public_4433ac
        public_44339d : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_4433aa
        mov dword ptr ds : [edx+8], ecx
        jmp public_4433ac
        public_4433aa : nop
        mov dword ptr ds : [edx], ecx
        public_4433ac : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_4433b2 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_4433db
        mov dword ptr ds : [edi+4], ecx
        public_4433db : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4433ee
        mov dword ptr ds : [edi+4], edx
        jmp public_4433fc
        public_4433ee : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_4433f9
        mov dword ptr ds : [edi], edx
        jmp public_4433fc
        public_4433f9 : nop
        mov dword ptr ds : [edi+8], edx
        public_4433fc : nop
        mov dword ptr ds : [edx], ecx
        public_4433fe : nop
        mov dword ptr ds : [ecx+4], edx
        public_443401 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_443270
        public_44340d : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x4431d0)
    }
}

#undef public_443243
#undef public_443257
#undef public_44325d
#undef public_443270
#undef public_4432b1
#undef public_4432ca
#undef public_4432dd
#undef public_4432e8
#undef public_4432eb
#undef public_4432f0
#undef public_443319
#undef public_443332
#undef public_443345
#undef public_44334f
#undef public_443372
#undef public_44338a
#undef public_44339d
#undef public_4433aa
#undef public_4433ac
#undef public_4433b2
#undef public_4433db
#undef public_4433ee
#undef public_4433f9
#undef public_4433fc
#undef public_4433fe
#undef public_443401
#undef public_44340d
