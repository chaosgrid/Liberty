#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1050);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb10aa _public_6eb10aa
#define public_6eb10c8 _public_6eb10c8

PROC_DECLARE(0x6eb1050, internal_6eb1050, public_6eb1050);
extern "C" NAKED register_t __cdecl internal_6eb1050()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x35]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_6eb10c8
        mov al, byte ptr ss : [ebp+0x34]
        push esi
        push 0x38
        mov byte ptr ss : [esp+0x18], al
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [esi+4], ecx
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        mov byte ptr ds : [esi+0x34], dl
        mov byte ptr ds : [esi+0x35], 0
        call public_6eb1f30
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_6eb10aa
        mov ebx, esi
        public_6eb10aa : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_6eb1050
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_6eb1050
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_6eb10c8 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eb1050)
    }
}

#undef public_6eb10aa
#undef public_6eb10c8
