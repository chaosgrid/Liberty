#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f478b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1198);

#define public_6f8b1a0 _public_6f8b1a0
#define public_6f8b1a8 _public_6f8b1a8
#define public_6f8b1ae _public_6f8b1ae
#define public_6f8b1d2 _public_6f8b1d2
#define public_6f8b1db _public_6f8b1db
#define public_6f8b1e5 _public_6f8b1e5
#define public_6f8b200 _public_6f8b200
#define public_6f8b225 _public_6f8b225
#define public_6f8b22c _public_6f8b22c

PROC_DECLARE(0x6f8b160, internal_6f8b160, public_6f8b160);
extern "C" NAKED register_t __cdecl internal_6f8b160()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1198 @0x6f8b162*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1198
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x88]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [eax+0x74]
        mov esi, eax
        mov cl, byte ptr ds : [esi]
        mov byte ptr ss : [esp+0x14], cl
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f8b1a0
        xor eax, eax
        jmp public_6f8b1a8
        public_6f8b1a0 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f8b1a8 : nop
        test eax, eax
        jge public_6f8b1ae
        xor eax, eax
        public_6f8b1ae : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+8]
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], ebp
        mov esi, ebp
        je public_6f8b1e5
        sub eax, ebp
        public_6f8b1d2 : nop
        test esi, esi
        je public_6f8b1db
        mov edx, dword ptr ds : [eax+esi]
        mov dword ptr ds : [esi], edx
        public_6f8b1db : nop
        add esi, 4
        lea edx, ds:[eax+esi]
        cmp edx, ecx
        jne public_6f8b1d2
        public_6f8b1e5 : nop
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        cmp ebp, esi
        mov dword ptr ss : [esp+0x2C], 0
        mov edi, ebp
        je public_6f8b22c
        nop 
        lea esp, ss:[esp]
        public_6f8b200 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [edi]
        mov ebx, eax
        call public_6f478b0
        cmp eax, ebx
        mov ebx, dword ptr ss : [esp+0x10]
        jne public_6f8b225
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [ebx]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x48]
        public_6f8b225 : nop
        add edi, 4
        cmp edi, esi
        jne public_6f8b200
        public_6f8b22c : nop
        push ebp
        mov byte ptr ds : [ebx+0x74], 0
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f8b160)
    }
}

#undef public_6f8b1a0
#undef public_6f8b1a8
#undef public_6f8b1ae
#undef public_6f8b1d2
#undef public_6f8b1db
#undef public_6f8b1e5
#undef public_6f8b200
#undef public_6f8b225
#undef public_6f8b22c
