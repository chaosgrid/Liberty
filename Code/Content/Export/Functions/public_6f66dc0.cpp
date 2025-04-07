#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f66dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f67090);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafc88);

#define public_6f66e20 _public_6f66e20
#define public_6f66e68 _public_6f66e68
#define public_6f66e7c _public_6f66e7c
#define public_6f66e85 _public_6f66e85
#define public_6f66e90 _public_6f66e90
#define public_6f66ea1 _public_6f66ea1

PROC_DECLARE(0x6f66dc0, internal_6f66dc0, public_6f66dc0);
extern "C" NAKED register_t __cdecl internal_6f66dc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafc88 @0x6f66dc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafc88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov al, byte ptr ss : [esp+0x24]
        push ebx
        push esi
        xor esi, esi
        mov byte ptr ss : [esp+0xC], al
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], esi
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx+0x154]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x2C], esi
        call public_6f66220
        mov ebx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        cmp ebx, eax
        je public_6f66ea1
        push ebp
        push edi
        mov edi, edi
        public_6f66e20 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [edx+4]
        je public_6f66e90
        mov eax, ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], eax
        call public_6f49bc0
        add esp, 4
        cmp eax, esi
        je public_6f66e85
        mov ebp, dword ptr ds : [eax+0x10]
        cmp ebp, esi
        je public_6f66e85
        mov edx, dword ptr ss : [esp+0x38]
        mov esi, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f66e68
        mov edi, eax
        public_6f66e68 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f66e7c
        mov dword ptr ds : [eax], ebp
        public_6f66e7c : nop
        mov eax, dword ptr ss : [esp+0x38]
        inc dword ptr ds : [eax+8]
        xor esi, esi
        public_6f66e85 : nop
        mov edx, dword ptr ds : [ebx]
        push edx
        call public_6f67090
        add esp, 4
        public_6f66e90 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add ebx, 4
        cmp ebx, eax
        jne public_6f66e20
        mov ebx, dword ptr ss : [esp+0x18]
        pop edi
        pop ebp
        public_6f66ea1 : nop
        push ebx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f66dc0)
    }
}

#undef public_6f66e20
#undef public_6f66e68
#undef public_6f66e7c
#undef public_6f66e85
#undef public_6f66e90
#undef public_6f66ea1
