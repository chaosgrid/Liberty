#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397051);

#define public_6325c30 _public_6325c30
#define public_6325c45 _public_6325c45
#define public_6325c71 _public_6325c71
#define public_6325c8b _public_6325c8b

PROC_DECLARE(0x6325be0, internal_6325be0, public_6325be0);
extern "C" NAKED register_t __cdecl internal_6325be0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397051 @0x6325be2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397051
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, ecx
        push 0xC
        mov byte ptr ds : [edi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx]
        mov ebx, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x28], edx
        mov ebp, ecx
        je public_6325c8b
        public_6325c30 : nop
        mov esi, dword ptr ds : [ebx+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], ebx
        jne public_6325c45
        mov esi, eax
        public_6325c45 : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov dword ptr ss : [esp+0x20], 0
        je public_6325c71
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [esi], eax
        public_6325c71 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x28]
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        jne public_6325c30
        public_6325c8b : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6325be0)
    }
}

#undef public_6325c30
#undef public_6325c45
#undef public_6325c71
#undef public_6325c8b
