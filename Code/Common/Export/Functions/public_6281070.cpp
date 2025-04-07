#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6281095 _public_6281095
#define public_62810b9 _public_62810b9
#define public_62810c0 _public_62810c0
#define public_62810e7 _public_62810e7
#define public_62810f0 _public_62810f0
#define public_6281105 _public_6281105
#define public_6281128 _public_6281128
#define public_6281139 _public_6281139

PROC_DECLARE(0x6281070, internal_6281070, public_6281070);
extern "C" NAKED register_t __cdecl internal_6281070()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ebp, ecx
        push esi
        push edi
        je public_6281139
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_62810b9
        public_6281095 : nop
        cmp ebx, dword ptr ss : [esp+0x10]
        je public_62810b9
        lea ecx, ds:[ebx+8]
        mov edi, dword ptr ds : [ecx]
        lea edx, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov ebx, dword ptr ds : [ebx]
        jne public_6281095
        public_62810b9 : nop
        cmp eax, esi
        mov edi, eax
        je public_62810e7
        nop 
        public_62810c0 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_62810c0
        public_62810e7 : nop
        cmp ebx, dword ptr ss : [esp+0x10]
        je public_6281139
        lea ecx, ds:[ecx]
        public_62810f0 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6281105
        mov edi, eax
        public_6281105 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6281128
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax+8], ecx
        public_6281128 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_62810f0
        public_6281139 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ds : [eax+0xC]
        mov byte ptr ss : [ebp+0xC], dl
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [ebp+0x10], ecx
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp+0x14], edx
        mov eax, dword ptr ds : [eax+0x18]
        pop edi
        mov dword ptr ss : [ebp+0x18], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6281070)
    }
}

#undef public_6281095
#undef public_62810b9
#undef public_62810c0
#undef public_62810e7
#undef public_62810f0
#undef public_6281105
#undef public_6281128
#undef public_6281139
