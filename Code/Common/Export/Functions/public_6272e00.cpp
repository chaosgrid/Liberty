#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62781b0);
CLANG_FORWARD_PROC_SYMBOL(public_6278290);
CLANG_FORWARD_PROC_SYMBOL(public_6279af0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6272e27 _public_6272e27
#define public_6272e30 _public_6272e30
#define public_6272ee6 _public_6272ee6
#define public_6272f0b _public_6272f0b
#define public_6272f30 _public_6272f30
#define public_6272f3b _public_6272f3b
#define public_6272f50 _public_6272f50
#define public_6272f5c _public_6272f5c
#define public_6272f61 _public_6272f61
#define public_6272f68 _public_6272f68

PROC_DECLARE(0x6272e00, internal_6272e00, public_6272e00);
extern "C" NAKED register_t __cdecl internal_6272e00()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        mov dword ptr ss : [esp+0x18], eax
        lea esi, ds:[eax+4]
        sub eax, ecx
        push edi
        lea edi, ds:[ecx+0xC]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], 7
        jmp public_6272e30
        public_6272e27 : nop
        mov eax, dword ptr ss : [esp+0x18]
        nop 
        lea esp, ss:[esp]
        public_6272e30 : nop
        mov cl, byte ptr ds : [edi-0xC]
        lea ebx, ds:[esi-4]
        mov byte ptr ds : [ebx], cl
        mov dl, byte ptr ds : [edi-0xB]
        mov byte ptr ds : [esi-3], dl
        mov cl, byte ptr ds : [edi]
        push 0x38
        mov byte ptr ds : [eax+edi], cl
        call public_6391d9c
        mov byte ptr ds : [eax+0x34], 1
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x35], cl
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ds : [eax+0x35], 1
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], ecx
        mov ebp, dword ptr ds : [esi+4]
        push 0x38
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x34], 0
        mov byte ptr ds : [eax+0x35], 0
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+8], eax
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0xC], 0
        mov ecx, dword ptr ds : [edi-8]
        mov ebp, dword ptr ds : [ecx+4]
        mov cl, byte ptr ss : [ebp+0x35]
        add esp, 8
        test cl, cl
        mov dword ptr ss : [esp+0x10], edx
        jne public_6272f0b
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x34]
        push ecx
        push eax
        mov ecx, ebx
        call public_6278290
        lea edx, ss:[ebp+0xC]
        mov dword ptr ss : [esp+0x24], eax
        push edx
        add eax, 0xC
        push eax
        call public_6279af0
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [esi+4]
        add esp, 8
        cmp ecx, edx
        jne public_6272ee6
        mov dword ptr ss : [esp+0x10], eax
        public_6272ee6 : nop
        mov edx, dword ptr ss : [ebp]
        push eax
        push edx
        mov ecx, ebx
        call public_62781b0
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push eax
        mov ecx, ebx
        call public_62781b0
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+8], eax
        public_6272f0b : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0xC], ecx
        mov eax, dword ptr ds : [edx+4]
        cmp eax, dword ptr ds : [esi+4]
        je public_6272f61
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        jne public_6272f3b
        lea ecx, ds:[ecx]
        public_6272f30 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        je public_6272f30
        public_6272f3b : nop
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_6272f5c
        lea esp, ss:[esp]
        public_6272f50 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_6272f50
        public_6272f5c : nop
        mov dword ptr ds : [edx+8], ecx
        jmp public_6272f68
        public_6272f61 : nop
        mov dword ptr ds : [edx], edx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+8], eax
        public_6272f68 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add edi, 0x14
        add esi, 0x14
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_6272e27
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6272e00)
    }
}

#undef public_6272e27
#undef public_6272e30
#undef public_6272ee6
#undef public_6272f0b
#undef public_6272f30
#undef public_6272f3b
#undef public_6272f50
#undef public_6272f5c
#undef public_6272f61
#undef public_6272f68
