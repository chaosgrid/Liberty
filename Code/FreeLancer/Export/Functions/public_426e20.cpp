#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_426e20);
CLANG_FORWARD_PROC_SYMBOL(public_426f80);
CLANG_FORWARD_PROC_SYMBOL(public_427250);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8be3);

#define public_426f10 _public_426f10
#define public_426f53 _public_426f53

PROC_DECLARE(0x426e20, internal_426e20, public_426e20);
extern "C" NAKED register_t __cdecl internal_426e20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8be3 @0x426e22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8be3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x84
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        push edi
        mov ebp, ecx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], ebx
        mov esi, dword ptr ss : [esp+0xA4]
        mov ecx, 7
        lea edi, ss:[esp+0x48]
        lea eax, ss:[esp+0x18]
        rep movsd
        push eax
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0xA0], ebx
        call public_426f80
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x6C], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x70], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x74], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x78], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x7C], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x80], eax
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x84], ecx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x88], edx
        mov dword ptr ss : [esp+0x8C], eax
        mov dword ptr ss : [esp+0x90], ecx
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0xA4], 1
        call public_427250
        mov ecx, dword ptr ss : [esp+0x64]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x9C], bl
        je public_426f10
        mov edx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ss : [esp+0x64], ebx
        public_426f10 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x90], 0xFFFFFFFF
        pop ebx
        je public_426f53
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ss : [esp]
        add eax, 0x28
        mov ecx, dword ptr ss : [esp+0x84]
        mov dword ptr fs : [0], ecx
        add esp, 0x90
        ret 4
        public_426f53 : nop
        mov ecx, dword ptr ss : [esp]
        lea eax, ds:[ecx+0x28]
        mov ecx, dword ptr ss : [esp+0x84]
        mov dword ptr fs : [0], ecx
        add esp, 0x90
        ret 4
        UNREACHABLE_TRAP(0x426e20)
    }
}

#undef public_426f10
#undef public_426f53
