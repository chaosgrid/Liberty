#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f228c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadee6);

#define public_6f22937 _public_6f22937
#define public_6f22954 _public_6f22954
#define public_6f2296a _public_6f2296a
#define public_6f2297d _public_6f2297d

PROC_DECLARE(0x6f228c0, internal_6f228c0, public_6f228c0);
extern "C" NAKED register_t __cdecl internal_6f228c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fadee6 @0x6f228c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadee6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        push edi
        mov ecx, 9
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov al, byte ptr ss : [ebp+0x24]
        mov byte ptr ds : [ebx+0x24], al
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [ebx+0x28], ecx
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [ebx+0x2C], edx
        mov al, byte ptr ss : [ebp+0x30]
        lea esi, ds:[ebx+0x30]
        push 0x20
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ss : [ebp+0x34]
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x2C], edx
        je public_6f22954
        public_6f22937 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        lea eax, ds:[edi+8]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6f1e5e0
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x10]
        jne public_6f22937
        public_6f22954 : nop
        mov ecx, dword ptr ss : [ebp+0x3C]
        test ecx, ecx
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ds : [ebx+0x3C], ecx
        je public_6f2296a
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        public_6f2296a : nop
        mov ecx, dword ptr ss : [ebp+0x40]
        test ecx, ecx
        mov byte ptr ss : [esp+0x24], 1
        mov dword ptr ds : [ebx+0x40], ecx
        je public_6f2297d
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6f2297d : nop
        mov eax, dword ptr ss : [ebp+0x44]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x44], eax
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6f228c0)
    }
}

#undef public_6f22937
#undef public_6f22954
#undef public_6f2296a
#undef public_6f2297d
