#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a80e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393eb1);

#define public_62a8151 _public_62a8151
#define public_62a8166 _public_62a8166
#define public_62a817d _public_62a817d
#define public_62a8192 _public_62a8192
#define public_62a819a _public_62a819a

PROC_DECLARE(0x62a80e0, internal_62a80e0, public_62a80e0);
extern "C" NAKED register_t __cdecl internal_62a80e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393eb1 @0x62a80e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393eb1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor edi, edi
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_62a819a
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], edx
        mov al, byte ptr ss : [ebp+0xC]
        push 0xC
        mov byte ptr ds : [esi+0xC], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], edi
        mov ecx, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_62a8192
        public_62a8151 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_62a8166
        mov ebp, eax
        public_62a8166 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_62a817d
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_62a817d : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [esi+0x14], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_62a8151
        mov ebp, dword ptr ss : [esp+0x2C]
        public_62a8192 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        pop ebp
        mov dword ptr ds : [esi+0x18], eax
        pop ebx
        public_62a819a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62a80e0)
    }
}

#undef public_62a8151
#undef public_62a8166
#undef public_62a817d
#undef public_62a8192
#undef public_62a819a
