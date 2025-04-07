#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb82c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb8300 _public_6eb8300
#define public_6eb830a _public_6eb830a
#define public_6eb8319 _public_6eb8319
#define public_6eb8330 _public_6eb8330
#define public_6eb8360 _public_6eb8360
#define public_6eb836f _public_6eb836f
#define public_6eb8388 _public_6eb8388
#define public_6eb83ad _public_6eb83ad
#define public_6eb83c5 _public_6eb83c5
#define public_6eb83cb _public_6eb83cb

PROC_DECLARE(0x6eb82c0, internal_6eb82c0, public_6eb82c0);
extern "C" NAKED register_t __cdecl internal_6eb82c0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov ebx, ecx
        push esi
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[ebx+0x1B0]
        call public_6f7b0f0
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, dword ptr ds : [ebx+0x1B4]
        je public_6eb83cb
        mov ecx, dword ptr ds : [ebx+0x1C8]
        mov eax, dword ptr ds : [ecx]
        xor dl, dl
        cmp eax, ecx
        je public_6eb8319
        mov esi, dword ptr ds : [esi]
        push ebp
        nop 
        lea esp, ss:[esp]
        public_6eb8300 : nop
        mov ebp, dword ptr ds : [eax+8]
        cmp dword ptr ss : [ebp+0xC], esi
        jne public_6eb830a
        mov dl, 1
        public_6eb830a : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6eb8300
        test dl, dl
        pop ebp
        jne public_6eb83cb
        public_6eb8319 : nop
        lea eax, ds:[edi+0x10]
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6eb8330
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_6eb8330 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea esi, ds:[eax+0x10]
        cmp dword ptr ds : [esi], 0
        jne public_6eb8388
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0xFFFFFFFF
        call dword ptr ds : [edx+8]
        test al, al
        je public_6eb8388
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi], 2
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6eb836f
        nop 
        lea esp, ss:[esp]
        public_6eb8360 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0xC]
        jne public_6eb8360
        public_6eb836f : nop
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        je public_6eb8388
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ds : [esi], 0
        je public_6eb8388
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        public_6eb8388 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [eax+0x10], 2
        je public_6eb83cb
        mov esi, dword ptr ds : [ebx+0x1C8]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6eb83ad
        mov edi, eax
        public_6eb83ad : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6eb83c5
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        public_6eb83c5 : nop
        inc dword ptr ds : [ebx+0x1CC]
        public_6eb83cb : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eb82c0)
    }
}

#undef public_6eb8300
#undef public_6eb830a
#undef public_6eb8319
#undef public_6eb8330
#undef public_6eb8360
#undef public_6eb836f
#undef public_6eb8388
#undef public_6eb83ad
#undef public_6eb83c5
#undef public_6eb83cb
