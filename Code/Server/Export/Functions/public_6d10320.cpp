#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0be50);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f460);
CLANG_FORWARD_PROC_SYMBOL(public_6d10320);
CLANG_FORWARD_PROC_SYMBOL(public_6d10470);
CLANG_FORWARD_PROC_SYMBOL(public_6d10480);
CLANG_FORWARD_PROC_SYMBOL(public_6d53360);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c810);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

#define public_6d1033b _public_6d1033b
#define public_6d10368 _public_6d10368
#define public_6d10380 _public_6d10380
#define public_6d10395 _public_6d10395
#define public_6d103a2 _public_6d103a2
#define public_6d103aa _public_6d103aa
#define public_6d103da _public_6d103da
#define public_6d103e2 _public_6d103e2
#define public_6d103f1 _public_6d103f1
#define public_6d10402 _public_6d10402
#define public_6d1040f _public_6d1040f
#define public_6d10413 _public_6d10413
#define public_6d10430 _public_6d10430
#define public_6d1043b _public_6d1043b
#define public_6d1045f _public_6d1045f

PROC_DECLARE(0x6d10320, internal_6d10320, public_6d10320);
extern "C" NAKED register_t __cdecl internal_6d10320()
{
    __asm
    {
        push ecx
        push ebx
        push edi
        call dword ptr ds : [public_6d641c0]
        test al, al
        mov ebx, dword ptr ss : [esp+0x10]
        jne public_6d1033b
        push ebx
        call dword ptr ds : [public_6d64724]
        add esp, 4
        public_6d1033b : nop
        mov cl, byte ptr ds : [public_6d8da28]
        mov al, 1
        test al, cl
        jne public_6d10368
        mov dl, cl
        or dl, al
        mov ecx, offset public_6d8da18
        mov byte ptr ds : [public_6d8da28], dl
        call public_6d10480
/*FIXUP push offset _public_6d10470 @0x6d1035b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d10470
        call public_6d6013e
        add esp, 4
        public_6d10368 : nop
        push 0
        mov ecx, offset public_6d90260
        call public_6d53360
        mov edi, eax
        test edi, edi
        je public_6d1045f
        push esi
        nop 
        public_6d10380 : nop
        mov eax, dword ptr ds : [public_6d8da1c]
        mov ecx, dword ptr ds : [public_6d8da20]
        cmp eax, ecx
        je public_6d103aa
        mov edx, dword ptr ds : [edi+0x3E0]
        public_6d10395 : nop
        cmp dword ptr ds : [eax], edx
        je public_6d103a2
        add eax, 4
        cmp eax, ecx
        jne public_6d10395
        jmp public_6d103aa
        public_6d103a2 : nop
        cmp eax, ecx
        jne public_6d1043b
        public_6d103aa : nop
        lea esi, ds:[edi+0x3E0]
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_6d8da2c
        call public_6d5c810
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_6d8da30]
        cmp ecx, eax
        je public_6d103da
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6d103da
        lea ecx, ss:[esp+0x14]
        jmp public_6d103e2
        public_6d103da : nop
        mov dword ptr ss : [esp+0xC], eax
        lea ecx, ss:[esp+0xC]
        public_6d103e2 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, eax
        je public_6d103f1
        push ebx
        add ecx, 0x10
        call public_6d0be50
        public_6d103f1 : nop
        mov eax, dword ptr ds : [public_6d8da1c]
        mov ecx, dword ptr ds : [public_6d8da20]
        cmp eax, ecx
        je public_6d10413
        mov edx, dword ptr ds : [esi]
        public_6d10402 : nop
        cmp dword ptr ds : [eax], edx
        je public_6d1040f
        add eax, 4
        cmp eax, ecx
        jne public_6d10402
        jmp public_6d10413
        public_6d1040f : nop
        cmp eax, ecx
        jne public_6d1043b
        public_6d10413 : nop
        push esi
        push ecx
        mov ecx, offset public_6d8da18
        call public_6d0f460
        mov eax, dword ptr ds : [public_6d8da1c]
        mov ecx, dword ptr ds : [public_6d8da20]
        cmp eax, ecx
        je public_6d1043b
        mov esi, dword ptr ds : [esi]
        public_6d10430 : nop
        cmp dword ptr ds : [eax], esi
        je public_6d1043b
        add eax, 4
        cmp eax, ecx
        jne public_6d10430
        public_6d1043b : nop
        push edi
        mov ecx, offset public_6d90260
        call public_6d53360
        mov edi, eax
        test edi, edi
        jne public_6d10380
        mov eax, dword ptr ds : [public_6d8da1c]
        pop esi
        pop edi
        mov dword ptr ds : [public_6d8da20], eax
        pop ebx
        pop ecx
        ret 
        public_6d1045f : nop
        mov ecx, dword ptr ds : [public_6d8da1c]
        pop edi
        mov dword ptr ds : [public_6d8da20], ecx
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d10320)
    }
}

#undef public_6d1033b
#undef public_6d10368
#undef public_6d10380
#undef public_6d10395
#undef public_6d103a2
#undef public_6d103aa
#undef public_6d103da
#undef public_6d103e2
#undef public_6d103f1
#undef public_6d10402
#undef public_6d1040f
#undef public_6d10413
#undef public_6d10430
#undef public_6d1043b
#undef public_6d1045f
