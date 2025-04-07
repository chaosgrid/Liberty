#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6cee360);
CLANG_FORWARD_PROC_SYMBOL(public_6cef3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6c50);
CLANG_FORWARD_PROC_SYMBOL(public_6d07b90);
CLANG_FORWARD_PROC_SYMBOL(public_6d08a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d08e20);
CLANG_FORWARD_PROC_SYMBOL(public_6d08e80);
CLANG_FORWARD_PROC_SYMBOL(public_6d11850);
CLANG_FORWARD_PROC_SYMBOL(public_6d23e40);
CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61337);

#define public_6d08ac3 _public_6d08ac3
#define public_6d08ad8 _public_6d08ad8
#define public_6d08adc _public_6d08adc
#define public_6d08ade _public_6d08ade
#define public_6d08b17 _public_6d08b17
#define public_6d08b8d _public_6d08b8d
#define public_6d08b90 _public_6d08b90
#define public_6d08bd4 _public_6d08bd4
#define public_6d08bd6 _public_6d08bd6
#define public_6d08c0f _public_6d08c0f
#define public_6d08c13 _public_6d08c13
#define public_6d08d0c _public_6d08d0c
#define public_6d08d41 _public_6d08d41
#define public_6d08d44 _public_6d08d44
#define public_6d08dbe _public_6d08dbe
#define public_6d08dd0 _public_6d08dd0
#define public_6d08ded _public_6d08ded

PROC_DECLARE(0x6d08a40, internal_6d08a40, public_6d08a40);
extern "C" NAKED register_t __cdecl internal_6d08a40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61337 @0x6d08a42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61337
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xBC
        mov eax, dword ptr ss : [esp+0xCC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xDC]
        push ebp
        push esi
        lea edx, ds:[ebx+ebx*8]
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ss : [esp+0xE0]
        shl edx, 3
        xor edi, edi
        push edx
        mov byte ptr ss : [esp+0x40], 0
        mov byte ptr ss : [esp+0x41], 0
        mov dword ptr ss : [esp+0x44], edi
        mov byte ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ecx
        call public_6d60012
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x28], ebp
        cmp ebp, edi
        mov dword ptr ss : [esp+0xD4], edi
        je public_6d08adc
        lea eax, ds:[ebx-1]
        cmp eax, edi
        mov esi, ebp
        jl public_6d08ad8
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        public_6d08ac3 : nop
        mov ecx, esi
        call public_6d08e80
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 0x48
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6d08ac3
        public_6d08ad8 : nop
        mov eax, ebp
        jmp public_6d08ade
        public_6d08adc : nop
        xor eax, eax
        public_6d08ade : nop
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x30], eax
        mov al, byte ptr ss : [esp+0x2F]
        mov byte ptr ss : [esp+0x44], bl
        mov byte ptr ss : [esp+0x18], al
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0xD4], 1
        jbe public_6d08dbe
        mov eax, ebx
        jge public_6d08b17
        xor eax, eax
        public_6d08b17 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6d60012
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        push edx
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6d23e40
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6d28880
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_6d5ffb0
        lea ecx, ds:[esi+ebx*4]
        mov dword ptr ss : [esp+0x28], ecx
        add esp, 4
        lea ecx, ss:[esp+0x18]
        call public_6d31890
        cmp ebx, edi
        lea edx, ds:[esi+eax*4]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x1C], esi
        jbe public_6d08dbe
        mov ebp, dword ptr ss : [esp+0xE4]
        mov dword ptr ss : [esp+0x28], ebx
        jmp public_6d08b90
        public_6d08b8d : nop
        xor edi, edi
        nop 
        public_6d08b90 : nop
        push 0x70
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, edi
        mov byte ptr ss : [esp+0xD4], 2
        je public_6d08bd4
        mov ecx, esi
        call public_6cee360
        mov dword ptr ds : [esi+0x60], edi
        mov dword ptr ds : [esi+0x64], edi
        mov dword ptr ds : [esi+0x68], edi
        mov dword ptr ds : [esi], offset public_6d67df4
        mov dword ptr ds : [esi+4], offset public_6d67d74
        mov dword ptr ds : [esi+0xC], offset public_6d67d68
        mov ebx, esi
        jmp public_6d08bd6
        public_6d08bd4 : nop
        xor ebx, ebx
        public_6d08bd6 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [ebx]
        push ecx
        mov ecx, ebx
        mov byte ptr ss : [esp+0xD8], 1
        call dword ptr ds : [eax+0x164]
        lea eax, ds:[ebx+0xC]
        cmp eax, edi
        je public_6d08c0f
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_6d08c0f
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x803
        cmp edx, 0x803
        mov dword ptr ss : [esp+0x10], eax
        je public_6d08c13
        public_6d08c0f : nop
        mov dword ptr ss : [esp+0x10], edi
        public_6d08c13 : nop
        lea ecx, ss:[esp+0x58]
        call public_6d08e20
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x58], eax
        mov dword ptr ss : [esp+0x5C], ecx
        mov dword ptr ss : [esp+0x64], edx
        lea eax, ss:[ebp+0x2C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x68], ecx
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0x70], eax
        mov dword ptr ss : [esp+0x60], edi
        lea esi, ss:[ebp+0x38]
        mov ecx, 9
        lea edi, ss:[esp+0x74]
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        lea ecx, ss:[ebp+0x20]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x98], edx
        mov dword ptr ss : [esp+0x9C], eax
        mov dword ptr ss : [esp+0xA0], ecx
        lea edx, ss:[ebp+0x5C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0xA4], eax
        mov eax, dword ptr ss : [esp+0xDC]
        mov dword ptr ss : [esp+0xB4], eax
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [esp+0xA8], ecx
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ss : [esp+0xAC], edx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0xC0], eax
        mov al, byte ptr ss : [ebp+0x69]
        mov dword ptr ss : [esp+0xB8], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0xBC], edx
        mov dl, byte ptr ss : [ebp+0x68]
        mov byte ptr ss : [esp+0xC9], al
        mov dword ptr ss : [esp+0xC4], ecx
        lea eax, ss:[esp+0x58]
        mov byte ptr ss : [esp+0xC8], dl
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0xA0]
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, 0x3FFFFFFF
        je public_6d08d0c
        push 1
        push eax
        mov ecx, ebx
        call public_6cef3b0
        public_6d08d0c : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx]
        push 0
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+0x170]
        add esi, 0x48
        mov ecx, esi
        call public_6d11850
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6d08d41
        mov dword ptr ds : [ecx], eax
        jmp public_6d08d44
        public_6d08d41 : nop
        mov dword ptr ds : [esi+4], eax
        public_6d08d44 : nop
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x24]
        push 1
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x1C], ebx
        call public_6cecbd0
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0xDC]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x48], ecx
        mov dword ptr ss : [esp+0x4C], edx
        mov eax, dword ptr ds : [eax+8]
        push eax
        call dword ptr ds : [public_6d644bc]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ss:[esp+0x4C]
        push edx
        push 0x2B
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x60], ecx
        call public_6d43650
        mov esi, dword ptr ss : [esp+0x3C]
        push edi
        push esi
        call public_6d07b90
        mov eax, dword ptr ss : [esp+0x3C]
        add esi, 0x48
        add esp, 0x14
        add ebp, 0x6C
        dec eax
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x28], eax
        jne public_6d08b8d
        public_6d08dbe : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d08ded
        nop 
        lea esp, ss:[esp]
        public_6d08dd0 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        lea ecx, ds:[esi+8]
        call public_6cf6c50
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [eax+0xC]
        jne public_6d08dd0
        public_6d08ded : nop
        mov ecx, dword ptr ss : [esp+0x40]
        push ecx
        call public_6d5ffb0
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0xD4]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xC8
        ret 0x10
        UNREACHABLE_TRAP(0x6d08a40)
    }
}

#undef public_6d08ac3
#undef public_6d08ad8
#undef public_6d08adc
#undef public_6d08ade
#undef public_6d08b17
#undef public_6d08b8d
#undef public_6d08b90
#undef public_6d08bd4
#undef public_6d08bd6
#undef public_6d08c0f
#undef public_6d08c13
#undef public_6d08d0c
#undef public_6d08d41
#undef public_6d08d44
#undef public_6d08dbe
#undef public_6d08dd0
#undef public_6d08ded
