#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222f30);
CLANG_FORWARD_PROC_SYMBOL(public_6227a20);
CLANG_FORWARD_PROC_SYMBOL(public_6227c70);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62490c0);

#define public_6227cea _public_6227cea
#define public_6227cec _public_6227cec
#define public_6227d09 _public_6227d09
#define public_6227d1b _public_6227d1b
#define public_6227d33 _public_6227d33
#define public_6227d57 _public_6227d57
#define public_6227d9e _public_6227d9e
#define public_6227dda _public_6227dda
#define public_6227dec _public_6227dec
#define public_6227df1 _public_6227df1
#define public_6227e1e _public_6227e1e
#define public_6227e20 _public_6227e20
#define public_6227e72 _public_6227e72
#define public_6227e8a _public_6227e8a
#define public_6227e9c _public_6227e9c
#define public_6227eb4 _public_6227eb4
#define public_6227ed9 _public_6227ed9

PROC_DECLARE(0x6227c70, internal_6227c70, public_6227c70);
extern "C" NAKED register_t __cdecl internal_6227c70()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62490c0 @0x6227c78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62490c0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        push esi
        push edi
        xor ebx, ebx
        or edi, 0xFFFFFFFF
        cmp ebp, ebx
        je public_6227ed9
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_624bac4]
        fnstsw ax
        test ah, 0x44
        jp public_6227d57
        mov dword ptr ss : [esp+0x34], ebx
        push 0x10
        mov dword ptr ss : [esp+0x2C], ebx
        call public_624612c
        add esp, 4
        cmp eax, ebx
        je public_6227cea
        mov dword ptr ds : [eax+4], 0x3F800000
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax], offset public_624bca0
        mov dword ptr ds : [eax+0xC], 1
        mov esi, eax
        jmp public_6227cec
        public_6227cea : nop
        xor esi, esi
        public_6227cec : nop
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x30]
        push ecx
        push esi
        push edx
        mov dword ptr ss : [esp+0x40], esi
        call public_6227a20
        mov edi, eax
        add esp, 0xC
        cmp edi, ebx
        jge public_6227d33
        public_6227d09 : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_6227d1b
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        public_6227d1b : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_6227d33 : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ebx
        push ebp
        call dword ptr ds : [ecx+0x14]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_6227ed9
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        jmp public_6227ed9
        public_6227d57 : nop
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_624d8cc]
        fnstsw ax
        test ah, 0x44
        jp public_6227eb4
        mov edi, dword ptr ss : [esp+0x30]
        mov esi, 1
        lea eax, ss:[esp+0x14]
        push esi
        push eax
        mov ecx, edi
        call public_6222f30
        test eax, eax
        jge public_6227d9e
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_6227d9e : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp]
        and eax, 0xFF
        push eax
        push ebp
        call dword ptr ds : [ecx+0x34]
        lea edx, ss:[esp+0x13]
        push esi
        push edx
        mov ecx, edi
        call public_6222f30
        mov edi, eax
        cmp edi, ebx
        jge public_6227dda
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_6227dda : nop
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x34], bl
        cmp al, bl
        jbe public_6227ed9
        jmp public_6227df1
        public_6227dec : nop
        mov esi, 1
        public_6227df1 : nop
        mov dword ptr ss : [esp+0x18], ebx
        push 0x10
        mov dword ptr ss : [esp+0x2C], esi
        call public_624612c
        add esp, 4
        cmp eax, ebx
        je public_6227e1e
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+4], 0x3F800000
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax], offset public_624bca0
        mov esi, eax
        jmp public_6227e20
        public_6227e1e : nop
        xor esi, esi
        public_6227e20 : nop
        mov edi, dword ptr ss : [esp+0x30]
        lea eax, ss:[esp+0x1C]
        push 4
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], esi
        call public_6222f30
        cmp eax, ebx
        jl public_6227e8a
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        push esi
        push edi
        call public_6227a20
        mov edi, eax
        add esp, 0xC
        cmp edi, ebx
        jl public_6227d09
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [ebp]
        push esi
        push eax
        push ebp
        call dword ptr ds : [edx+0x14]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_6227e72
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        public_6227e72 : nop
        mov al, byte ptr ss : [esp+0x34]
        mov cl, byte ptr ss : [esp+0x13]
        inc al
        cmp al, cl
        mov byte ptr ss : [esp+0x34], al
        jb public_6227dec
        jmp public_6227ed9
        public_6227e8a : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_6227e9c
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_6227e9c : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_6227eb4 : nop
        mov ecx, dword ptr ds : [public_624b004]
/*FIXUP push offset public_6256458 @0x6227eba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256458
        push 0x198
        mov eax, 0x100001
/*FIXUP push offset public_62563d0 @0x6227ec9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62563d0
/*FIXUP push offset public_625506c @0x6227ece*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6227ed9 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6227c70)
    }
}

#undef public_6227cea
#undef public_6227cec
#undef public_6227d09
#undef public_6227d1b
#undef public_6227d33
#undef public_6227d57
#undef public_6227d9e
#undef public_6227dda
#undef public_6227dec
#undef public_6227df1
#undef public_6227e1e
#undef public_6227e20
#undef public_6227e72
#undef public_6227e8a
#undef public_6227e9c
#undef public_6227eb4
#undef public_6227ed9
