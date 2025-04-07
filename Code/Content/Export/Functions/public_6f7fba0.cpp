#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6f7fba0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0698);

#define public_6f7fbdc _public_6f7fbdc
#define public_6f7fbe0 _public_6f7fbe0
#define public_6f7fc27 _public_6f7fc27

PROC_DECLARE(0x6f7fba0, internal_6f7fba0, public_6f7fba0);
extern "C" NAKED register_t __cdecl internal_6f7fba0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb0698 @0x6f7fba8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0698
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ebx-0x34]
        cmp ecx, edx
        lea eax, ds:[ebx-0x38]
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x20], eax
        jae public_6f7fc27
        lea ebp, ds:[eax+0x18]
        jmp public_6f7fbe0
        public_6f7fbdc : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6f7fbe0 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp-0x10]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ss : [ebp-0x14]
        push ecx
        lea ecx, ds:[ebx+8]
        mov dword ptr ds : [ebx+4], eax
        call public_6eb6560
        lea edi, ds:[ebx+0x18]
        mov esi, ebp
        mov ecx, 6
        rep movsd
        mov edx, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ebx+0x30], edx
        mov al, byte ptr ss : [ebp+0x1C]
        mov byte ptr ds : [ebx+0x34], al
        mov eax, dword ptr ss : [esp+0x20]
        mov ebx, eax
        sub eax, 0x38
        sub ebp, 0x38
        mov dword ptr ss : [esp+0x20], eax
        cmp ecx, dword ptr ss : [ebp-0x14]
        jb public_6f7fbdc
        public_6f7fc27 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ds:[ebx+8]
        mov dword ptr ds : [ebx], edx
        mov dword ptr ds : [ebx+4], eax
        call public_6eb6560
        mov edx, dword ptr ss : [esp+0x54]
        mov al, byte ptr ss : [esp+0x58]
        lea edi, ds:[ebx+0x18]
        mov ecx, 6
        lea esi, ss:[esp+0x3C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov dword ptr ds : [ebx+0x30], edx
        mov byte ptr ds : [ebx+0x34], al
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f7fba0)
    }
}

#undef public_6f7fbdc
#undef public_6f7fbe0
#undef public_6f7fc27
