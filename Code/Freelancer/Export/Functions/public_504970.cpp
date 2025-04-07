#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d950);
CLANG_FORWARD_PROC_SYMBOL(public_4e7f60);
CLANG_FORWARD_PROC_SYMBOL(public_504970);
CLANG_FORWARD_PROC_SYMBOL(public_509c30);
CLANG_FORWARD_PROC_SYMBOL(public_509d60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf9e8);

#define public_504a30 _public_504a30

PROC_DECLARE(0x504970, internal_504970, public_504970);
extern "C" NAKED register_t __cdecl internal_504970()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf9e8 @0x504972*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf9e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [esi], offset public_5dad1c
        lea eax, ss:[esp+0x12]
        push eax
        lea edx, ss:[esp+0x17]
        xor ebx, ebx
        lea ecx, ds:[esi+4]
        push edx
        mov dword ptr ss : [esp+0x2C], ebx
        call public_509c30
        mov cl, byte ptr ss : [esp+0x13]
        mov al, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x38]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov byte ptr ds : [esi+0x2C], bl
        mov dword ptr ds : [esi+0x30], ebx
        mov byte ptr ds : [edi+1], cl
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [edi], al
        mov byte ptr ds : [edi+0xC], bl
        call public_4e7f60
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+0xF0], ebx
        mov dl, byte ptr ss : [esp+0x13]
        push 0xC
        mov byte ptr ss : [esp+0x28], 3
        mov byte ptr ds : [esi+0xF4], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0xF8], eax
        mov dword ptr ds : [esi+0xFC], ebx
        mov byte ptr ss : [esp+0x24], 4
        lea ebp, ds:[esi+0x148]
        mov dword ptr ss : [esp+0x14], 8
        public_504a30 : nop
        mov ecx, ebp
        call public_43d950
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 0x1C
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_504a30
        mov byte ptr ds : [esi+0x24C], bl
        mov ebp, 0x3F800000
        mov dword ptr ds : [esi], offset public_5dacbc
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xE0], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov byte ptr ds : [esi+0x2C0], bl
        mov byte ptr ds : [esi+0x2CC], bl
        mov dword ptr ds : [esi+0xC0], 4
        mov dword ptr ds : [esi+0xC4], 8
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xC8], ebp
        mov dword ptr ds : [esi+0xCC], ebp
        mov dword ptr ds : [esi+0xD4], 0x3F400000
        mov dword ptr ds : [esi+0xD8], 1
        mov dword ptr ds : [esi+0x294], ebx
        mov dword ptr ds : [esi+0x2C4], 0x3F000000
        mov dword ptr ds : [esi+0x2C8], 0x3FE00000
        mov dword ptr ds : [esi+0x2BC], 0x459C4000
        mov dword ptr ds : [esi+0x2B4], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 5
        call public_509d60
        mov dword ptr ds : [esi+0x50], 0x3DCCCCCD
        mov dword ptr ds : [esi+0x58], 0x3E4CCCCD
        mov eax, 0x41200000
        mov dword ptr ds : [esi+0x54], eax
        mov dword ptr ds : [esi+0x250], eax
        mov eax, 0x3E800000
        mov ecx, 0xBF800000
        mov dword ptr ds : [esi+0x258], ecx
        mov edx, 0x3F000000
        mov dword ptr ds : [esi+0x254], edx
        mov dword ptr ds : [esi+0x25C], eax
        mov dword ptr ds : [esi+0x260], eax
        mov dword ptr ds : [esi+0x264], eax
        mov dword ptr ds : [esi+0x268], ebp
        mov byte ptr ds : [esi+0x26C], bl
        mov dword ptr ds : [esi+0x270], ebx
        mov dword ptr ds : [esi+0x27C], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x274], 0x40400000
        mov dword ptr ds : [esi+0x278], edx
        mov dword ptr ds : [esi+0x280], ebp
        mov dword ptr ds : [esi+0x284], ebp
        mov dword ptr ds : [esi+0x288], ebp
        mov dword ptr ds : [esi+0x28C], eax
        pop edi
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x290], 0x3F400000
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x504970)
    }
}

#undef public_504a30
