#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f80180);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0708);

#define public_6f801bf _public_6f801bf
#define public_6f801c7 _public_6f801c7
#define public_6f801cd _public_6f801cd

PROC_DECLARE(0x6f80180, internal_6f80180, public_6f80180);
extern "C" NAKED register_t __cdecl internal_6f80180()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0708 @0x6f80182*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0708
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        mov ebx, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [ebx+8]
        push ebp
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x18], dl
        jne public_6f801bf
        xor eax, eax
        jmp public_6f801c7
        public_6f801bf : nop
        mov eax, dword ptr ds : [ebx+0x10]
        sub eax, ecx
        sar eax, 2
        public_6f801c7 : nop
        test eax, eax
        jge public_6f801cd
        xor eax, eax
        public_6f801cd : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [ebx+0xC]
        add esp, 4
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x28], eax
        call public_6eed270
        mov dl, byte ptr ds : [ebx+0x34]
        lea esi, ds:[ebx+0x18]
        mov ecx, 6
        lea edi, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], eax
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [esp+0x40], ecx
        mov byte ptr ss : [esp+0x44], dl
        mov ebp, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+4]
        lea eax, ss:[ebp+8]
        mov dword ptr ds : [ebx+4], ecx
        push eax
        lea ecx, ds:[ebx+8]
        mov dword ptr ss : [esp+0x54], 0
        call public_6eb6560
        lea esi, ss:[ebp+0x18]
        mov ecx, 6
        lea edi, ds:[ebx+0x18]
        rep movsd
        mov edx, dword ptr ss : [ebp+0x30]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x30], edx
        mov al, byte ptr ss : [ebp+0x34]
        mov edx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [ebx+0x34], al
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [ebp], ecx
        push eax
        lea ecx, ss:[ebp+8]
        mov dword ptr ss : [ebp+4], edx
        call public_6eb6560
        mov eax, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x44]
        mov ecx, 6
        lea esi, ss:[esp+0x28]
        lea edi, ss:[ebp+0x18]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x40]
        push eax
        mov dword ptr ss : [ebp+0x30], ecx
        mov byte ptr ss : [ebp+0x34], dl
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x6f80180)
    }
}

#undef public_6f801bf
#undef public_6f801c7
#undef public_6f801cd
