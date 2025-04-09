#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_4510f0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9e07);

#define public_4511e4 _public_4511e4

PROC_DECLARE(0x4510f0, internal_4510f0, public_4510f0);
extern "C" NAKED register_t __cdecl internal_4510f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9e07 @0x4510f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9e07
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push eax
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        call public_44fbe0
        xor ebx, ebx
        lea ecx, ss:[ebp+0x170]
        mov dword ptr ss : [esp+0x28], ebx
        call dword ptr ds : [public_5c61b0]
        mov esi, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [ebp], offset public_5ccf6c
        mov dword ptr ss : [ebp+4], offset public_5ccf3c
        mov dword ptr ss : [ebp+8], offset public_5ccf20
        mov dword ptr ss : [ebp+0xC], offset public_5ccf00
        mov dword ptr ss : [ebp+0x10], offset public_5ccec8
        mov dword ptr ss : [ebp+0x14], offset public_5ccea0
        mov dword ptr ss : [ebp+0x18], offset public_5cce7c
        mov dword ptr ss : [ebp+0x1C], offset public_5cce44
        mov dword ptr ss : [ebp+0x20], offset public_5cce2c
        mov dword ptr ss : [ebp+0x6C], ebx
        lea eax, ss:[ebp+0xB0]
        or edx, 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x70], edx
        mov dword ptr ss : [ebp+0x74], edx
        mov dword ptr ss : [ebp+0x78], edx
        lea edi, ss:[ebp+0x80]
        mov ecx, 0xC
        rep movsd
        mov esi, ebx
        mov ecx, eax
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx+8], esi
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x28], ebx
        mov dword ptr ds : [eax+0x24], ebx
        mov dword ptr ds : [eax+0x20], ebx
        mov dword ptr ds : [eax+0x18], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        xor eax, eax
        lea ecx, ss:[ebp+0x120]
        public_4511e4 : nop
        mov dword ptr ds : [ecx-0x40], edx
        mov dword ptr ds : [ecx], edx
        mov byte ptr ds : [eax+ebp+0x160], bl
        inc eax
        add ecx, 4
        cmp eax, 0x10
        jl public_4511e4
        lea ecx, ss:[ebp+0x170]
        call dword ptr ds : [public_5c61ac]
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0x10
        UNREACHABLE_TRAP(0x4510f0)
    }
}

#undef public_4511e4
