#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee86c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8960);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8c30);
CLANG_FORWARD_JUMP_SYMBOL(public_6ee8f88);

#define public_6ee89e9 _public_6ee89e9
#define public_6ee89ed _public_6ee89ed
#define public_6ee8a0a _public_6ee8a0a
#define public_6ee8a50 _public_6ee8a50
#define public_6ee8a85 _public_6ee8a85
#define public_6ee8a89 _public_6ee8a89
#define public_6ee8a8f _public_6ee8a8f
#define public_6ee8a99 _public_6ee8a99
#define public_6ee8aa4 _public_6ee8aa4
#define public_6ee8aae _public_6ee8aae
#define public_6ee8ab4 _public_6ee8ab4
#define public_6ee8ad9 _public_6ee8ad9
#define public_6ee8adc _public_6ee8adc
#define public_6ee8afe _public_6ee8afe
#define public_6ee8b0e _public_6ee8b0e
#define public_6ee8b22 _public_6ee8b22
#define public_6ee8b6a _public_6ee8b6a
#define public_6ee8b8c _public_6ee8b8c
#define public_6ee8ba1 _public_6ee8ba1
#define public_6ee8bb8 _public_6ee8bb8
#define public_6ee8bc9 _public_6ee8bc9
#define public_6ee8bd3 _public_6ee8bd3
#define public_6ee8bdb _public_6ee8bdb
#define public_6ee8be1 _public_6ee8be1
#define public_6ee8be4 _public_6ee8be4

PROC_DECLARE(0x6ee8960, internal_6ee8960, public_6ee8960);
extern "C" NAKED register_t __cdecl internal_6ee8960()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6ee8f88 @0x6ee8962*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6ee8f88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        or ebx, 0xFFFFFFFF
        push edi
        xor edi, edi
        mov eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edi
        mov esi, dword ptr ss : [esp+0x3C]
        cmp esi, edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x18], ecx
        je public_6ee89ed
        mov eax, dword ptr ds : [esi]
        push edi
        push edi
        push edi
        push 2
        push edi
        push edi
        push esi
        call dword ptr ds : [eax+0x3C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        je public_6ee89e9
        mov ecx, dword ptr ds : [esi]
        push edi
        push edi
        push edi
        push 4
        push eax
        push esi
        call dword ptr ds : [ecx+0x40]
        mov edx, dword ptr ds : [esi]
        push edi
        push edi
        push esi
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [edx+0x28]
        cmp dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], eax
        setne al
        test al, al
        mov dword ptr ss : [esp+0x28], edi
        jne public_6ee8a0a
        mov eax, dword ptr ss : [esp+0x1C]
        public_6ee89e9 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        public_6ee89ed : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x34], ebx
        je public_6ee8be4
        cmp ecx, edi
        je public_6ee8be4
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        jmp public_6ee8be1
        public_6ee8a0a : nop
        push 0xC
        push edi
        lea ecx, ss:[esp+0x20]
        call public_6ee8c30
        mov ecx, eax
        cmp ecx, edi
        je public_6ee8bc9
        mov eax, dword ptr ss : [esp+0x28]
        add eax, 0xC
        mov dword ptr ss : [esp+0x28], eax
        cmp dword ptr ds : [ecx], 0x46464952
        jne public_6ee8bc9
        cmp dword ptr ds : [ecx+8], 0x45564157
        jne public_6ee8bc9
        xor esi, esi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x3C], edi
        xor ebx, ebx
        mov edi, edi
        public_6ee8a50 : nop
        push 8
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6ee8c30
        cmp eax, edi
        je public_6ee8ab4
        add dword ptr ss : [esp+0x28], 8
        mov ecx, dword ptr ds : [eax]
        cmp ecx, 0x6D697274
        ja public_6ee8a8f
        je public_6ee8a89
        cmp ecx, 0x20746D66
        je public_6ee8a85
        cmp ecx, 0x61746164
        jne public_6ee8a99
        mov ebx, eax
        jmp public_6ee8a99
        public_6ee8a85 : nop
        mov esi, eax
        jmp public_6ee8a99
        public_6ee8a89 : nop
        mov dword ptr ss : [esp+0x3C], eax
        jmp public_6ee8a99
        public_6ee8a8f : nop
        cmp ecx, 0x74636166
        jne public_6ee8a99
        mov ebp, eax
        public_6ee8a99 : nop
        mov eax, dword ptr ds : [eax+4]
        add eax, dword ptr ss : [esp+0x28]
        jns public_6ee8aa4
        xor eax, eax
        public_6ee8aa4 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        cmp eax, ecx
        jle public_6ee8aae
        mov eax, ecx
        public_6ee8aae : nop
        mov dword ptr ss : [esp+0x28], eax
        jmp public_6ee8a50
        public_6ee8ab4 : nop
        cmp esi, edi
        je public_6ee8bb8
        cmp ebx, edi
        je public_6ee8bb8
        mov di, word ptr ds : [esi+8]
        cmp di, 1
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+8]
        jne public_6ee8ad9
        cmp ecx, 0xE
        jmp public_6ee8adc
        public_6ee8ad9 : nop
        cmp ecx, 0x12
        public_6ee8adc : nop
        jae public_6ee8afe
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        je public_6ee8be4
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jmp public_6ee8bdb
        public_6ee8afe : nop
        or esi, 0xFFFFFFFF
        test ebp, ebp
        je public_6ee8b0e
        cmp dword ptr ss : [ebp+4], 4
        jb public_6ee8b0e
        mov esi, dword ptr ss : [ebp+8]
        public_6ee8b0e : nop
        mov edx, dword ptr ss : [esp+0x3C]
        or ecx, 0xFFFFFFFF
        test edx, edx
        je public_6ee8b22
        cmp dword ptr ds : [edx+4], 4
        jne public_6ee8b22
        mov ecx, dword ptr ds : [edx+8]
        public_6ee8b22 : nop
        cmp di, 1
        lea edx, ds:[ebx+8]
        jne public_6ee8ba1
        mov cx, word ptr ds : [eax+2]
        mov esi, dword ptr ds : [ebx+4]
        mov word ptr ss : [esp+0x10], cx
        mov cx, word ptr ds : [eax+0xE]
        mov ax, word ptr ds : [eax+4]
        shr cx, 3
        mov word ptr ss : [esp+0x12], cx
        mov word ptr ss : [esp+0x14], ax
        mov ecx, dword ptr ss : [esp+0x12]
        imul ecx, dword ptr ss : [esp+0x10]
        push esi
        push edx
        mov word ptr ss : [esp+0x1E], cx
        mov ecx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [eax]
        public_6ee8b6a : nop
        mov bl, al
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        je public_6ee8b8c
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        je public_6ee8b8c
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x10]
        public_6ee8b8c : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        public_6ee8ba1 : nop
        mov edi, dword ptr ss : [esp+0x40]
        push edi
        push esi
        push ecx
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        push eax
        call public_6ee86c0
        add esp, 0x18
        jmp public_6ee8b6a
        public_6ee8bb8 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        cmp ecx, 0xFFFFFFFF
        jmp public_6ee8bd3
        public_6ee8bc9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x34], ebx
        cmp ecx, ebx
        public_6ee8bd3 : nop
        je public_6ee8be4
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, edi
        public_6ee8bdb : nop
        je public_6ee8be4
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        public_6ee8be1 : nop
        call dword ptr ds : [edx+0x10]
        public_6ee8be4 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6ee8960)
    }
}

#undef public_6ee89e9
#undef public_6ee89ed
#undef public_6ee8a0a
#undef public_6ee8a50
#undef public_6ee8a85
#undef public_6ee8a89
#undef public_6ee8a8f
#undef public_6ee8a99
#undef public_6ee8aa4
#undef public_6ee8aae
#undef public_6ee8ab4
#undef public_6ee8ad9
#undef public_6ee8adc
#undef public_6ee8afe
#undef public_6ee8b0e
#undef public_6ee8b22
#undef public_6ee8b6a
#undef public_6ee8b8c
#undef public_6ee8ba1
#undef public_6ee8bb8
#undef public_6ee8bc9
#undef public_6ee8bd3
#undef public_6ee8bdb
#undef public_6ee8be1
#undef public_6ee8be4
