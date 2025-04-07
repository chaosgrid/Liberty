#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f21c50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faddf7);

#define public_6f21ce0 _public_6f21ce0
#define public_6f21cfd _public_6f21cfd
#define public_6f21d10 _public_6f21d10
#define public_6f21d23 _public_6f21d23
#define public_6f21d2c _public_6f21d2c

PROC_DECLARE(0x6f21c50, internal_6f21c50, public_6f21c50);
extern "C" NAKED register_t __cdecl internal_6f21c50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faddf7 @0x6f21c52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faddf7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+8], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x18], 0
        je public_6f21d2c
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        push esi
        push edi
        mov ecx, 9
        mov esi, ebx
        mov edi, ebp
        rep movsd
        mov al, byte ptr ds : [ebx+0x24]
        mov byte ptr ss : [ebp+0x24], al
        mov ecx, dword ptr ds : [ebx+0x28]
        mov dword ptr ss : [ebp+0x28], ecx
        mov edx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ss : [ebp+0x2C], edx
        mov al, byte ptr ds : [ebx+0x30]
        lea esi, ss:[ebp+0x30]
        push 0x20
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [ebx+0x34]
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x30], edx
        je public_6f21cfd
        lea esp, ss:[esp]
        public_6f21ce0 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        lea eax, ds:[edi+8]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6f1e5e0
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x10]
        jne public_6f21ce0
        public_6f21cfd : nop
        mov ecx, dword ptr ds : [ebx+0x3C]
        test ecx, ecx
        mov byte ptr ss : [esp+0x24], 1
        mov dword ptr ss : [ebp+0x3C], ecx
        je public_6f21d10
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        public_6f21d10 : nop
        mov ecx, dword ptr ds : [ebx+0x40]
        test ecx, ecx
        mov byte ptr ss : [esp+0x24], 2
        mov dword ptr ss : [ebp+0x40], ecx
        je public_6f21d23
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6f21d23 : nop
        mov eax, dword ptr ds : [ebx+0x44]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x44], eax
        pop ebx
        public_6f21d2c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f21c50)
    }
}

#undef public_6f21ce0
#undef public_6f21cfd
#undef public_6f21d10
#undef public_6f21d23
#undef public_6f21d2c
