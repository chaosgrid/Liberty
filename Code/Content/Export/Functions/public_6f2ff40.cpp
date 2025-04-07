#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fb70);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ff40);
CLANG_FORWARD_PROC_SYMBOL(public_6f308e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30960);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae8af);

#define public_6f2ff87 _public_6f2ff87
#define public_6f2fffd _public_6f2fffd
#define public_6f30005 _public_6f30005
#define public_6f3000d _public_6f3000d
#define public_6f30030 _public_6f30030
#define public_6f30038 _public_6f30038
#define public_6f30042 _public_6f30042
#define public_6f30060 _public_6f30060
#define public_6f30068 _public_6f30068
#define public_6f3006e _public_6f3006e
#define public_6f300d0 _public_6f300d0

PROC_DECLARE(0x6f2ff40, internal_6f2ff40, public_6f2ff40);
extern "C" NAKED register_t __cdecl internal_6f2ff40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae8af @0x6f2ff42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae8af
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], 0
        je public_6f300d0
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov al, byte ptr ds : [ebx]
        push esi
        mov ecx, ebx
        mov byte ptr ss : [ebp], al
        call public_6f2fb70
        test eax, eax
        jge public_6f2ff87
        xor eax, eax
        public_6f2ff87 : nop
        imul eax, 0x44
        push edi
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push edx
        mov ecx, ebp
        call public_6f30960
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        lea ecx, ds:[ebx+0x10]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[ebp+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea edx, ds:[ebx+0x1C]
        mov ecx, dword ptr ds : [edx]
        lea eax, ss:[ebp+0x1C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea edi, ss:[ebp+0x28]
        lea esi, ds:[ebx+0x28]
        mov ecx, 0xC
        rep movsd
        mov al, byte ptr ds : [ebx+0x58]
        mov byte ptr ss : [ebp+0x58], al
        mov eax, dword ptr ds : [ebx+0x5C]
        test eax, eax
        mov byte ptr ss : [esp+0x1C], 1
        pop edi
        jne public_6f2fffd
        xor ecx, ecx
        jmp public_6f30005
        public_6f2fffd : nop
        mov ecx, dword ptr ds : [ebx+0x60]
        sub ecx, eax
        sar ecx, 2
        public_6f30005 : nop
        test ecx, ecx
        mov eax, ecx
        jge public_6f3000d
        xor eax, eax
        public_6f3000d : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ss : [ebp+0x5C], eax
        mov edx, dword ptr ds : [ebx+0x60]
        mov ecx, dword ptr ds : [ebx+0x5C]
        add esp, 4
        cmp ecx, edx
        je public_6f30042
        lea ebx, ds:[ebx]
        public_6f30030 : nop
        test eax, eax
        je public_6f30038
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_6f30038 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6f30030
        public_6f30042 : nop
        mov dword ptr ss : [ebp+0x60], eax
        mov dword ptr ss : [ebp+0x64], eax
        mov dl, byte ptr ds : [ebx+0x68]
        lea esi, ss:[ebp+0x68]
        mov byte ptr ds : [esi], dl
        mov ecx, dword ptr ds : [ebx+0x6C]
        test ecx, ecx
        mov byte ptr ss : [esp+0x18], 2
        jne public_6f30060
        xor eax, eax
        jmp public_6f30068
        public_6f30060 : nop
        mov eax, dword ptr ds : [ebx+0x70]
        sub eax, ecx
        sar eax, 2
        public_6f30068 : nop
        test eax, eax
        jge public_6f3006e
        xor eax, eax
        public_6f3006e : nop
        shl eax, 2
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0x70]
        mov edx, dword ptr ds : [ebx+0x6C]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [ebx+0x78]
        mov dword ptr ss : [ebp+0x78], ecx
        mov edx, dword ptr ds : [ebx+0x7C]
        mov dword ptr ss : [ebp+0x7C], edx
        mov eax, dword ptr ds : [ebx+0x80]
        mov dword ptr ss : [ebp+0x80], eax
        mov ecx, dword ptr ds : [ebx+0x84]
        add ebx, 0x88
        mov dword ptr ss : [ebp+0x84], ecx
        push ebx
        lea ecx, ss:[ebp+0x88]
        mov byte ptr ss : [esp+0x1C], 3
        call public_6f308e0
        pop esi
        pop ebx
        public_6f300d0 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f2ff40)
    }
}

#undef public_6f2ff87
#undef public_6f2fffd
#undef public_6f30005
#undef public_6f3000d
#undef public_6f30030
#undef public_6f30038
#undef public_6f30042
#undef public_6f30060
#undef public_6f30068
#undef public_6f3006e
#undef public_6f300d0
