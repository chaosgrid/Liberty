#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410db0);
CLANG_FORWARD_PROC_SYMBOL(public_411690);
CLANG_FORWARD_PROC_SYMBOL(public_411910);
CLANG_FORWARD_PROC_SYMBOL(public_411960);
CLANG_FORWARD_PROC_SYMBOL(public_4119c0);
CLANG_FORWARD_PROC_SYMBOL(public_411af0);
CLANG_FORWARD_PROC_SYMBOL(public_411bc0);

#define public_410dd0 _public_410dd0
#define public_410de3 _public_410de3
#define public_410de6 _public_410de6
#define public_410dea _public_410dea
#define public_410e49 _public_410e49
#define public_410e61 _public_410e61
#define public_410e6b _public_410e6b
#define public_410e6f _public_410e6f
#define public_410e80 _public_410e80
#define public_410ebb _public_410ebb
#define public_410eca _public_410eca
#define public_410eeb _public_410eeb
#define public_410f0c _public_410f0c
#define public_410f1a _public_410f1a
#define public_410f39 _public_410f39
#define public_410f45 _public_410f45
#define public_410f61 _public_410f61
#define public_410f7c _public_410f7c
#define public_410f83 _public_410f83
#define public_410fa6 _public_410fa6

PROC_DECLARE(0x410db0, internal_410db0, public_410db0);
extern "C" NAKED register_t __cdecl internal_410db0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_410dea
        lea esp, ss:[esp]
        public_410dd0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_410de3
        mov ebp, dword ptr ss : [ebp]
        jmp public_410de6
        public_410de3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_410de6 : nop
        cmp ebp, edx
        jne public_410dd0
        public_410dea : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_410f61
        push 0
        push esi
        mov ecx, edi
        call public_4119c0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_411bc0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_410e49
        cmp ebp, dword ptr ds : [edi+8]
        jne public_410e49
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_410e49
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_410e6f
        mov dword ptr ds : [eax+8], ebx
        jmp public_410e6f
        public_410e49 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_410e61
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_410e6b
        public_410e61 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_410e6b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_410e6b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_410e6f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_410f45
        lea ecx, ds:[ecx]
        public_410e80 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_410f45
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_410eeb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_410ebb
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_410f39
        public_410ebb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_410eca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_411910
        public_410eca : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_411960
        jmp public_410f39
        public_410eeb : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_410f0c
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_410f39
        public_410f0c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_410f1a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_411960
        public_410f1a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_411910
        public_410f39 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_410e80
        public_410f45 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_410f61 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_410f7c
        cmp esi, dword ptr ds : [ecx]
        je public_410f83
        lea ecx, ss:[esp+0x10]
        call public_411af0
        mov edx, dword ptr ss : [esp+0x10]
        public_410f7c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_410fa6
        public_410f83 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_411690
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_410fa6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x410db0)
    }
}

#undef public_410dd0
#undef public_410de3
#undef public_410de6
#undef public_410dea
#undef public_410e49
#undef public_410e61
#undef public_410e6b
#undef public_410e6f
#undef public_410e80
#undef public_410ebb
#undef public_410eca
#undef public_410eeb
#undef public_410f0c
#undef public_410f1a
#undef public_410f39
#undef public_410f45
#undef public_410f61
#undef public_410f7c
#undef public_410f83
#undef public_410fa6
