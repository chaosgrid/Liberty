#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60859);

#define public_6cf0bcf _public_6cf0bcf
#define public_6cf0bd7 _public_6cf0bd7
#define public_6cf0be0 _public_6cf0be0
#define public_6cf0c07 _public_6cf0c07
#define public_6cf0c29 _public_6cf0c29
#define public_6cf0c32 _public_6cf0c32
#define public_6cf0c57 _public_6cf0c57

PROC_DECLARE(0x6cf0b50, internal_6cf0b50, public_6cf0b50);
extern "C" NAKED register_t __cdecl internal_6cf0b50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60859 @0x6cf0b58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60859
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        push ebp
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf0c57
        mov ebp, dword ptr ss : [esp+0xC]
        xor edi, edi
        cmp ebp, edi
        je public_6cf0c57
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6cf0c57
        mov al, byte ptr ss : [esp+0x40]
        push esi
        mov byte ptr ss : [esp+0x20], al
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], edi
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, edi
        mov dword ptr ss : [esp+0x38], edi
        jne public_6cf0bcf
        xor esi, esi
        jmp public_6cf0bd7
        public_6cf0bcf : nop
        mov esi, dword ptr ds : [ebx+0x10]
        sub esi, eax
        sar esi, 2
        public_6cf0bd7 : nop
        cmp esi, edi
        jle public_6cf0c32
        nop 
        lea esp, ss:[esp]
        public_6cf0be0 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ds:[eax+edi*4]
        push eax
        call public_6d006c0
        add esp, 0xC
        test al, al
        jne public_6cf0c07
        mov dword ptr ss : [esp+0x44], 0
        jmp public_6cf0c29
        public_6cf0c07 : nop
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        je public_6cf0c29
        mov edx, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x14]
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_6d643d8]
        public_6cf0c29 : nop
        inc edi
        cmp edi, esi
        jl public_6cf0be0
        mov ebp, dword ptr ss : [esp+0x10]
        public_6cf0c32 : nop
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        lea edx, ss:[esp+0x24]
        lea ecx, ss:[ebp+4]
        push edx
        add ebx, 4
        push ebx
        call dword ptr ds : [eax+0x3C]
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_6d5ffb0
        add esp, 4
        pop esi
        public_6cf0c57 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x6cf0b50)
    }
}

#undef public_6cf0bcf
#undef public_6cf0bd7
#undef public_6cf0be0
#undef public_6cf0c07
#undef public_6cf0c29
#undef public_6cf0c32
#undef public_6cf0c57
