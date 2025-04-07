#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_452fa0);
CLANG_FORWARD_PROC_SYMBOL(public_556fd0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9e7b);

#define public_4530b6 _public_4530b6
#define public_4530cc _public_4530cc
#define public_4530dc _public_4530dc

PROC_DECLARE(0x452fa0, internal_452fa0, public_452fa0);
extern "C" NAKED register_t __cdecl internal_452fa0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9e7b @0x452fa2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9e7b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC4
        mov eax, dword ptr ss : [esp+0xD8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xE4]
        push esi
        push edi
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xE4]
        push ebp
        push eax
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        call public_44fbe0
        mov dword ptr ds : [ebx], offset public_5cd524
        mov dword ptr ds : [ebx+4], offset public_5cd4f4
        mov dword ptr ds : [ebx+8], offset public_5cd4d8
        mov dword ptr ds : [ebx+0xC], offset public_5cd4b8
        mov dword ptr ds : [ebx+0x10], offset public_5cd480
        mov dword ptr ds : [ebx+0x14], offset public_5cd458
        mov dword ptr ds : [ebx+0x18], offset public_5cd434
        mov dword ptr ds : [ebx+0x1C], offset public_5cd3fc
        mov dword ptr ds : [ebx+0x20], offset public_5cd3e4
        lea edx, ss:[ebp+8]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], eax
        xor eax, eax
        mov al, byte ptr ss : [ebp+0x40]
        lea esi, ss:[ebp+0x44]
        mov ecx, 0x24
        lea edi, ss:[esp+0x44]
        rep movsd
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        push eax
        lea esi, ss:[ebp+0x14]
        mov ecx, 9
        lea edi, ss:[esp+0x24]
        rep movsd
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x74]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov dword ptr ss : [esp+0xEC], 0
        call public_556fd0
        mov edx, dword ptr ss : [esp+0x60]
        lea edi, ds:[ebx+0x74]
        mov ecx, 9
        lea esi, ss:[esp+0x30]
        rep movsd
        lea ecx, ds:[ebx+0x98]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ss : [esp+0x74]
        add esp, 0x10
        test ecx, ecx
        setne dl
        or esi, 0xFFFFFFFF
        mov dword ptr ds : [ebx+0x6C], eax
        xor ecx, ecx
        public_4530b6 : nop
        mov edi, dword ptr ds : [ecx*4+public_66d130]
        test edi, edi
        je public_4530cc
        inc ecx
        cmp ecx, 0x40
        jl public_4530b6
        mov dword ptr ds : [ebx+0x70], esi
        jmp public_4530dc
        public_4530cc : nop
        mov dword ptr ds : [ecx*4+public_66d130], eax
        mov byte ptr ds : [ecx+public_66d230], dl
        mov dword ptr ds : [ebx+0x70], ecx
        public_4530dc : nop
        mov ecx, dword ptr ss : [esp+0xD4]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xD0
        ret 0xC
        UNREACHABLE_TRAP(0x452fa0)
    }
}

#undef public_4530b6
#undef public_4530cc
#undef public_4530dc
