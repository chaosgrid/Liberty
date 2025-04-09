#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531f30);
CLANG_FORWARD_PROC_SYMBOL(public_536170);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0720);

#define public_531faa _public_531faa
#define public_531fb8 _public_531fb8
#define public_531fbc _public_531fbc
#define public_531fd8 _public_531fd8
#define public_531fe8 _public_531fe8

PROC_DECLARE(0x531f30, internal_531f30, public_531f30);
extern "C" NAKED register_t __cdecl internal_531f30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0720 @0x531f32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0720
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5de15c
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        call dword ptr ds : [eax+0x1C]
        mov edi, eax
        mov dword ptr ss : [esp+0xC], ebx
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
/*FIXUP push offset public_5cad80 @0x531f7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        mov byte ptr ss : [esp+0x28], 1
        call dword ptr ds : [edx]
        test eax, eax
        mov eax, dword ptr ss : [esp+0xC]
        jl public_531faa
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1C], bl
        je public_531fbc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_531fb8
        public_531faa : nop
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1C], bl
        je public_531fbc
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_531fb8 : nop
        mov dword ptr ss : [esp+0xC], ebx
        public_531fbc : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_5de13c
        je public_531fd8
        push esi
        call dword ptr ds : [public_5c6938]
        public_531fd8 : nop
        mov esi, dword ptr ds : [esi+0xC]
        cmp esi, ebx
        je public_531fe8
        push esi
        call public_536170
        add esp, 4
        public_531fe8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x531f30)
    }
}

#undef public_531faa
#undef public_531fb8
#undef public_531fbc
#undef public_531fd8
#undef public_531fe8
