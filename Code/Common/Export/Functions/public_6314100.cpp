#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6315db0);
CLANG_FORWARD_PROC_SYMBOL(public_63169f0);
CLANG_FORWARD_PROC_SYMBOL(public_6318450);
CLANG_FORWARD_PROC_SYMBOL(public_6318550);
CLANG_FORWARD_PROC_SYMBOL(public_63185f0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);

#define public_631413c _public_631413c
#define public_6314144 _public_6314144
#define public_63141a4 _public_63141a4
#define public_63141cf _public_63141cf
#define public_6314227 _public_6314227
#define public_6314230 _public_6314230
#define public_6314255 _public_6314255
#define public_6314263 _public_6314263
#define public_631426f _public_631426f

PROC_DECLARE(0x6314100, internal_6314100, public_6314100);
extern "C" NAKED register_t __cdecl internal_6314100()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x24]
        lea esi, ds:[edi+4]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], eax
        call public_62fcfb0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_631413c
        mov edx, dword ptr ss : [esp+0x24]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_631413c
        lea eax, ss:[esp+0x10]
        jmp public_6314144
        public_631413c : nop
        mov dword ptr ss : [esp+0x14], ecx
        lea eax, ss:[esp+0x14]
        public_6314144 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+8]
        jne public_631426f
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call public_6315db0
        mov ecx, dword ptr ds : [ebx]
        mov esi, eax
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        lea ecx, ds:[ebx+4]
        push ecx
        lea ecx, ds:[esi+4]
        call dword ptr ds : [public_63991a8]
        lea ebp, ds:[ebx+0x14]
        lea edi, ds:[esi+0x14]
        cmp edi, ebp
        je public_63141a4
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_63169f0
        mov al, byte ptr ss : [ebp+1]
        push ebp
        mov ecx, edi
        mov byte ptr ds : [edi+1], al
        call public_6318450
        public_63141a4 : nop
        lea ebp, ds:[ebx+0x28]
        lea edi, ds:[esi+0x28]
        cmp edi, ebp
        je public_63141cf
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call public_63169f0
        mov dl, byte ptr ss : [ebp+1]
        push ebp
        mov ecx, edi
        mov byte ptr ds : [edi+1], dl
        call public_6318450
        public_63141cf : nop
        add ebx, 0x3C
        add esi, 0x3C
        cmp esi, ebx
        je public_6314263
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_6314227
        mov ecx, eax
        cmp eax, ecx
        jne public_6314227
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call public_6318550
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_632c410
        jmp public_6314255
        public_6314227 : nop
        cmp eax, edi
        je public_6314255
        nop 
        lea esp, ss:[esp]
        public_6314230 : nop
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_63185f0
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_62b5ff0
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6314230
        public_6314255 : nop
        mov cl, byte ptr ds : [ebx+1]
        mov byte ptr ds : [esi+1], cl
        push ebx
        mov ecx, esi
        call public_6318450
        public_6314263 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
        public_631426f : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6314100)
    }
}

#undef public_631413c
#undef public_6314144
#undef public_63141a4
#undef public_63141cf
#undef public_6314227
#undef public_6314230
#undef public_6314255
#undef public_6314263
#undef public_631426f
