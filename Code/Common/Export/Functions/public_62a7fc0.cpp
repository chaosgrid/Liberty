#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a7fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393eb1);

#define public_62a8070 _public_62a8070
#define public_62a808d _public_62a808d
#define public_62a80a4 _public_62a80a4
#define public_62a80b5 _public_62a80b5
#define public_62a80c4 _public_62a80c4

PROC_DECLARE(0x62a7fc0, internal_62a7fc0, public_62a7fc0);
extern "C" NAKED register_t __cdecl internal_62a7fc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393eb1 @0x62a7fc2*/
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
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x14], 0
        je public_62a80c4
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx+0xC], eax
        push esi
        push edi
        lea esi, ss:[ebp+0x10]
        lea edi, ds:[ebx+0x10]
        mov ecx, 9
        rep movsd
        lea ecx, ss:[ebp+0x34]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0x34]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp+0x40]
        mov dword ptr ds : [ebx+0x40], edx
        mov eax, dword ptr ss : [ebp+0x44]
        mov dword ptr ds : [ebx+0x44], eax
        mov cl, byte ptr ss : [ebp+0x48]
        push 0xC
        mov byte ptr ds : [ebx+0x48], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+0x4C], eax
        mov dword ptr ds : [ebx+0x50], 0
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_62a80b5
        lea esp, ss:[esp]
        public_62a8070 : nop
        mov edx, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x30], edx
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], esi
        jne public_62a808d
        mov ecx, eax
        public_62a808d : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_62a80a4
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], edx
        public_62a80a4 : nop
        mov ecx, dword ptr ds : [ebx+0x50]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [ebx+0x50], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_62a8070
        public_62a80b5 : nop
        mov eax, dword ptr ss : [ebp+0x54]
        pop edi
        mov dword ptr ds : [ebx+0x54], eax
        mov cl, byte ptr ss : [ebp+0x58]
        pop esi
        mov byte ptr ds : [ebx+0x58], cl
        pop ebp
        public_62a80c4 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62a7fc0)
    }
}

#undef public_62a8070
#undef public_62a808d
#undef public_62a80a4
#undef public_62a80b5
#undef public_62a80c4
