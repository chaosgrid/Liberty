#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f35310);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f50760);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f35352 _public_6f35352
#define public_6f35373 _public_6f35373
#define public_6f35380 _public_6f35380
#define public_6f3538f _public_6f3538f
#define public_6f353a2 _public_6f353a2
#define public_6f353a7 _public_6f353a7
#define public_6f353b2 _public_6f353b2
#define public_6f353c0 _public_6f353c0
#define public_6f353cb _public_6f353cb
#define public_6f353cd _public_6f353cd
#define public_6f353e8 _public_6f353e8

PROC_DECLARE(0x6f35310, internal_6f35310, public_6f35310);
extern "C" NAKED register_t __cdecl internal_6f35310()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        call public_6f50760
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, eax
        mov eax, dword ptr ds : [edi+8]
        push ecx
        push eax
        push eax
        mov dword ptr ss : [esp+0x18], ebx
        call public_6f6a640
        mov esi, eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push eax
        push esi
        mov ecx, edi
        call public_6ea1490
        mov dword ptr ds : [edi+8], esi
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x18], esi
        je public_6f353a2
        push ebp
        public_6f35352 : nop
        push esi
        call public_6f50650
        add esp, 4
        test eax, eax
        je public_6f3538f
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+8]
        cmp edx, ebx
        je public_6f353b2
        mov ebp, dword ptr ds : [eax+0x4C]
        mov ecx, dword ptr ds : [eax+0x50]
        public_6f35373 : nop
        mov eax, ebp
        cmp eax, ecx
        je public_6f3538f
        mov esi, dword ptr ds : [edx]
        nop 
        lea esp, ss:[esp]
        public_6f35380 : nop
        cmp esi, dword ptr ds : [eax]
        je public_6f353a7
        add eax, 4
        cmp eax, ecx
        jne public_6f35380
        mov esi, dword ptr ss : [esp+0x1C]
        public_6f3538f : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        add esi, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], esi
        jne public_6f35352
        pop ebp
        public_6f353a2 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        public_6f353a7 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        add edx, 4
        cmp edx, ebx
        jne public_6f35373
        public_6f353b2 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f353cb
        mov edx, dword ptr ds : [esi]
        mov edi, edi
        public_6f353c0 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f353cd
        add eax, 4
        cmp eax, ecx
        jne public_6f353c0
        public_6f353cb : nop
        mov eax, ecx
        public_6f353cd : nop
        cmp eax, ecx
        jne public_6f3538f
        push esi
        push 1
        push ecx
        mov ecx, edi
        call public_6f937c0
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f3538f
        mov edx, dword ptr ds : [esi]
        public_6f353e8 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f3538f
        add eax, 4
        cmp eax, ecx
        jne public_6f353e8
        jmp public_6f3538f
        UNREACHABLE_TRAP(0x6f35310)
    }
}

#undef public_6f35352
#undef public_6f35373
#undef public_6f35380
#undef public_6f3538f
#undef public_6f353a2
#undef public_6f353a7
#undef public_6f353b2
#undef public_6f353c0
#undef public_6f353cb
#undef public_6f353cd
#undef public_6f353e8
