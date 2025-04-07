#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22500);
CLANG_FORWARD_PROC_SYMBOL(public_6f34a10);
CLANG_FORWARD_PROC_SYMBOL(public_6f34ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f35cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f35d90);
CLANG_FORWARD_PROC_SYMBOL(public_6f35e40);
CLANG_FORWARD_PROC_SYMBOL(public_6f36460);
CLANG_FORWARD_PROC_SYMBOL(public_6f36520);
CLANG_FORWARD_PROC_SYMBOL(public_6f36b40);
CLANG_FORWARD_PROC_SYMBOL(public_6f36ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f36bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58ad0);

#define public_6f357b0 _public_6f357b0
#define public_6f358e3 _public_6f358e3
#define public_6f358ee _public_6f358ee
#define public_6f358ef _public_6f358ef
#define public_6f35937 _public_6f35937
#define public_6f359df _public_6f359df
#define public_6f35a3b _public_6f35a3b
#define public_6f35a50 _public_6f35a50
#define public_6f35a96 _public_6f35a96
#define public_6f35a9c _public_6f35a9c
#define public_6f35b24 _public_6f35b24

PROC_DECLARE(0x6f356f0, internal_6f356f0, public_6f356f0);
extern "C" NAKED register_t __cdecl internal_6f356f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58ad0 @0x6f356f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58ad0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x9C
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xB8]
        or eax, 0xFFFFFFFF
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6f35b24
        mov cl, byte ptr ss : [esp+0xB]
        mov al, byte ptr ss : [esp+0xB]
        push ebx
        mov byte ptr ss : [esp+0x6D], cl
        push edi
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ss : [esp+0x44], 0
        mov byte ptr ss : [esp+0x70], al
        mov byte ptr ss : [esp+0x7C], 0
        call public_6f36460
        mov dl, byte ptr ss : [esp+0x13]
        mov al, byte ptr ss : [esp+0x13]
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0xB4], ebp
        mov byte ptr ss : [esp+0x48], dl
        mov byte ptr ss : [esp+0x49], al
        mov byte ptr ss : [esp+0x54], 0
        call public_6f36b40
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6f5ff7c
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_6f5ff7c @0x6f35783*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ff7c
        push esi
        mov byte ptr ss : [esp+0xC0], 1
        mov bl, 1
        mov byte ptr ss : [esp+0x1F], 0
        call dword ptr ds : [public_6f5a088]
        add esp, 0xC
        test eax, eax
        jne public_6f357b0
        mov byte ptr ss : [esp+0x44], bl
        lea esp, ss:[esp]
        public_6f357b0 : nop
        mov eax, dword ptr ss : [esp+0xBC]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x18]
        lea edi, ds:[eax-8]
        push edx
        mov ecx, edi
        call public_6f34a10
        test al, al
        je public_6f358ef
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0xA0], ecx
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0xA4], edx
        push ecx
        lea edx, ss:[esp+0x98]
        push edx
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0xA4], ebp
        mov dword ptr ss : [esp+0xB0], eax
        call public_6f35e40
        lea eax, ss:[esp+0x98]
        push eax
        lea ecx, ss:[esp+0x98]
        push ecx
        lea ecx, ss:[esp+0x8C]
        call public_6f36ba0
        mov edx, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        add edx, 0x10
        test bl, bl
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        je public_6f358ee
        mov esi, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_6f34ae0
        test al, al
        je public_6f358e3
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x64], ecx
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x68], edx
        push ecx
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x40]
        push edx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x64], ebp
        mov dword ptr ss : [esp+0x74], eax
        call public_6f36520
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x94]
        call public_6f36bc0
        mov edx, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        add edx, 0x10
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+0xC], ecx
        jmp public_6f358ee
        public_6f358e3 : nop
        mov dword ptr ss : [esp+0x14], esi
        xor bl, bl
        mov byte ptr ss : [esp+0x13], 1
        public_6f358ee : nop
        inc ebp
        public_6f358ef : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jne public_6f357b0
        cmp ebp, 1
        jbe public_6f35a96
        lea edx, ss:[ebp+ebp*2]
        shl edx, 2
        push edx
        call public_6f57e9c
        mov edi, eax
        mov eax, ebp
        shl eax, 4
        push eax
        mov dword ptr ss : [esp+0x1C], edi
        call public_6f57e9c
        xor ebx, ebx
        add esp, 8
        xor esi, esi
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x18], eax
        jbe public_6f35a50
        mov ebx, eax
        public_6f35937 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x24], edx
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x30], eax
        call public_6f35e40
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x94]
        call public_6f36ba0
        mov edx, dword ptr ss : [esp+0x8C]
        add edx, 0x10
        mov ecx, dword ptr ds : [edx]
        mov eax, edi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6f359df
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, ebx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x30], 0
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x34], 0
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x38], 0
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        jmp public_6f35a3b
        public_6f359df : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x64], ecx
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x68], edx
        push ecx
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x88]
        push edx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x64], esi
        mov dword ptr ss : [esp+0x74], eax
        call public_6f36520
        mov eax, dword ptr ss : [esp+0x84]
        add eax, 0x10
        mov edx, dword ptr ds : [eax]
        mov ecx, ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        public_6f35a3b : nop
        inc esi
        add edi, 0xC
        add ebx, 0x10
        cmp esi, ebp
        jb public_6f35937
        mov edi, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        public_6f35a50 : nop
        mov ecx, dword ptr ss : [esp+0xBC]
        mov edx, dword ptr ds : [ecx-8]
        push ebp
        lea esi, ds:[ecx-8]
        push edi
        push esi
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push ebp
        push esi
        call dword ptr ds : [eax+0x2C]
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0xBC]
        push ecx
        mov ecx, dword ptr ds : [edx+4]
        call public_6f22500
        push edi
        xor esi, esi
        call public_6f57e26
        push ebp
        call public_6f57e26
        add esp, 8
        jmp public_6f35a9c
        public_6f35a96 : nop
        mov esi, dword ptr ss : [esp+0x18]
        xor ebx, ebx
        public_6f35a9c : nop
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0xC0], 0
        call public_6f35d90
        mov ecx, dword ptr ss : [esp+0x4C]
        push ecx
        call public_6f57e26
        mov edx, dword ptr ss : [esp+0x54]
        push edx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x60], ebx
        call public_6f57e26
        mov eax, dword ptr ss : [esp+0x7C]
        add esp, 8
        push eax
        mov dword ptr ss : [esp+0x54], ebx
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0xC0], 0xFFFFFFFF
        call public_6f35cd0
        mov ecx, dword ptr ss : [esp+0x74]
        push ecx
        call public_6f57e26
        mov edx, dword ptr ss : [esp+0x7C]
        push edx
        mov dword ptr ss : [esp+0x7C], ebx
        mov dword ptr ss : [esp+0x88], ebx
        call public_6f57e26
        add esp, 8
        pop edi
        mov eax, esi
        pop ebx
        public_6f35b24 : nop
        mov ecx, dword ptr ss : [esp+0xA4]
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0xA8
        ret 8
        UNREACHABLE_TRAP(0x6f356f0)
    }
}

#undef public_6f357b0
#undef public_6f358e3
#undef public_6f358ee
#undef public_6f358ef
#undef public_6f35937
#undef public_6f359df
#undef public_6f35a3b
#undef public_6f35a50
#undef public_6f35a96
#undef public_6f35a9c
#undef public_6f35b24
