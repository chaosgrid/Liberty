#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629e030);
CLANG_FORWARD_PROC_SYMBOL(public_629f2c0);
CLANG_FORWARD_PROC_SYMBOL(public_630e960);
CLANG_FORWARD_JUMP_SYMBOL(public_6393a93);

#define public_629e122 _public_629e122
#define public_629e14a _public_629e14a

PROC_DECLARE(0x629e030, internal_629e030, public_629e030);
extern "C" NAKED register_t __cdecl internal_629e030()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393a93 @0x629e032*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393a93
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        mov eax, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x60]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x64]
        push esi
        push edi
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x74]
        push eax
        push ecx
        push edx
        push ebp
        push 0x100000
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], ebx
        call public_629f2c0
        xor esi, esi
        lea edi, ds:[ebx+0x20]
        mov eax, 0x3F800000
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi], eax
        mov al, byte ptr ss : [esp+0x78]
        mov dword ptr ds : [edi+0x1C], esi
        mov dword ptr ds : [edi+0x18], esi
        mov dword ptr ds : [edi+0x14], esi
        mov dword ptr ds : [edi+0xC], esi
        mov dword ptr ds : [edi+8], esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+0x2C], esi
        mov dword ptr ds : [edi+0x28], esi
        mov dword ptr ds : [edi+0x24], esi
        mov dword ptr ss : [esp+0x64], esi
        mov byte ptr ds : [ebx+0x50], al
        mov dword ptr ds : [ebx+0x54], esi
        mov dword ptr ds : [ebx+0x58], esi
        mov dword ptr ds : [ebx+0x5C], esi
        cmp ebp, esi
        mov byte ptr ss : [esp+0x64], 1
        mov dword ptr ds : [ebx], offset public_639d8c4
        je public_629e14a
        mov ecx, dword ptr ss : [ebp+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_629e14a
        mov edx, dword ptr ss : [ebp+0x88]
        mov eax, dword ptr ds : [edx+0xE8]
        mov ebp, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x7C]
        push edx
        push eax
        push ebp
        call public_630e960
        add esp, 0x10
        test al, al
        je public_629e122
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, 9
        lea esi, ss:[esp+0x24]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ds:[ebx+0x44]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        jmp public_629e14a
        public_629e122 : nop
        mov eax, 0x3F800000
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+0x1C], esi
        mov dword ptr ds : [edi+0x18], esi
        mov dword ptr ds : [edi+0x14], esi
        mov dword ptr ds : [edi+0xC], esi
        mov dword ptr ds : [edi+8], esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+0x2C], esi
        mov dword ptr ds : [edi+0x28], esi
        mov dword ptr ds : [edi+0x24], esi
        public_629e14a : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 0x10
        UNREACHABLE_TRAP(0x629e030)
    }
}

#undef public_629e122
#undef public_629e14a
