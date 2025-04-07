#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5e910);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ea40);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f5e957 _public_6f5e957
#define public_6f5e994 _public_6f5e994
#define public_6f5e9ea _public_6f5e9ea
#define public_6f5ea09 _public_6f5ea09
#define public_6f5ea16 _public_6f5ea16

PROC_DECLARE(0x6f5e910, internal_6f5e910, public_6f5e910);
extern "C" NAKED register_t __cdecl internal_6f5e910()
{
    __asm
    {
        sub esp, 0x24
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x3C]
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        push ebp
        mov ebp, dword ptr ss : [esp+0x40]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        push ebp
        push ebx
        push eax
        push ecx
        call public_6f5ea40
        add esp, 0x1C
        test al, al
        mov byte ptr ss : [esp+0x4C], al
        jne public_6f5ea16
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6f5e994
        public_6f5e957 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push 0
        lea edx, ss:[esp+0x50]
        push edx
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x58], eax
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6f5e957
        public_6f5e994 : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [ebx+8]
        xor ebx, ebx
        push 0x2C
        mov dword ptr ss : [esp+0x14], 1
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        call public_6fa912a
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [eax], esi
        jne public_6f5e9ea
        mov edi, eax
        public_6f5e9ea : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        cmp eax, ebx
        je public_6f5ea09
        mov ecx, 9
        lea esi, ss:[esp+0x10]
        mov edi, eax
        rep movsd
        public_6f5ea09 : nop
        mov eax, dword ptr ss : [ebp+8]
        inc eax
        pop edi
        mov dword ptr ss : [ebp+8], eax
        mov al, byte ptr ss : [esp+0x50]
        pop esi
        public_6f5ea16 : nop
        pop ebp
        pop ebx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6f5e910)
    }
}

#undef public_6f5e957
#undef public_6f5e994
#undef public_6f5e9ea
#undef public_6f5ea09
#undef public_6f5ea16
