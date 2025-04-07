#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7fea0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb06e8);

#define public_6f7fee7 _public_6f7fee7
#define public_6f7fef6 _public_6f7fef6
#define public_6f7ff4a _public_6f7ff4a
#define public_6f7ff54 _public_6f7ff54
#define public_6f7ff63 _public_6f7ff63
#define public_6f7ffbb _public_6f7ffbb

PROC_DECLARE(0x6f7fea0, internal_6f7fea0, public_6f7fea0);
extern "C" NAKED register_t __cdecl internal_6f7fea0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb06e8 @0x6f7fea2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb06e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x64]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0x1C], 2
        jae public_6f7ff4a
        cmp ecx, edx
        jae public_6f7fee7
        lea ebx, ss:[esp+0x60]
        jmp public_6f7fef6
        public_6f7fee7 : nop
        cmp eax, edx
        lea ebx, ss:[esp+0x98]
        jb public_6f7fef6
        lea ebx, ss:[esp+0x28]
        public_6f7fef6 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx]
        lea edx, ds:[ebx+8]
        mov dword ptr ss : [ebp+4], ecx
        push edx
        lea ecx, ss:[ebp+8]
        mov dword ptr ss : [ebp], eax
        call public_6eb35b0
        mov eax, dword ptr ds : [ebx+0x30]
        lea esi, ds:[ebx+0x18]
        lea edi, ss:[ebp+0x18]
        mov ecx, 6
        rep movsd
        mov cl, byte ptr ds : [ebx+0x34]
        mov byte ptr ss : [ebp+0x34], cl
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [ebp+0x30], eax
        call public_6eec8d0
        lea ecx, ss:[esp+0x68]
        call public_6eec8d0
        lea ecx, ss:[esp+0xA0]
        call public_6eec8d0
        jmp public_6f7ffbb
        public_6f7ff4a : nop
        cmp eax, edx
        jae public_6f7ff54
        lea ebx, ss:[esp+0x28]
        jmp public_6f7ff63
        public_6f7ff54 : nop
        cmp ecx, edx
        lea ebx, ss:[esp+0x98]
        jb public_6f7ff63
        lea ebx, ss:[esp+0x60]
        public_6f7ff63 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ds:[ebx+8]
        push ecx
        lea ecx, ss:[ebp+8]
        mov dword ptr ss : [ebp], edx
        mov dword ptr ss : [ebp+4], eax
        call public_6eb35b0
        mov edx, dword ptr ds : [ebx+0x30]
        mov al, byte ptr ds : [ebx+0x34]
        lea esi, ds:[ebx+0x18]
        lea edi, ss:[ebp+0x18]
        mov ecx, 6
        rep movsd
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        mov dword ptr ss : [ebp+0x30], edx
        mov byte ptr ss : [ebp+0x34], al
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x70]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0xAC]
        push eax
        call public_6fa8fe0
        add esp, 0xC
        public_6f7ffbb : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f7fea0)
    }
}

#undef public_6f7fee7
#undef public_6f7fef6
#undef public_6f7ff4a
#undef public_6f7ff54
#undef public_6f7ff63
#undef public_6f7ffbb
