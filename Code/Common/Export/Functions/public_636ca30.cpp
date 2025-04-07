#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6356a40);
CLANG_FORWARD_PROC_SYMBOL(public_6356a70);
CLANG_FORWARD_PROC_SYMBOL(public_6356ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6356b40);
CLANG_FORWARD_PROC_SYMBOL(public_636c9a0);
CLANG_FORWARD_PROC_SYMBOL(public_636ca30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6398870);

#define public_636ca8d _public_636ca8d
#define public_636caae _public_636caae
#define public_636cab7 _public_636cab7
#define public_636cb0f _public_636cb0f
#define public_636cb11 _public_636cb11
#define public_636cb26 _public_636cb26
#define public_636cb3c _public_636cb3c
#define public_636cb6a _public_636cb6a
#define public_636cb77 _public_636cb77
#define public_636cb94 _public_636cb94
#define public_636cba7 _public_636cba7
#define public_636cbc5 _public_636cbc5
#define public_636cbce _public_636cbce

PROC_DECLARE(0x636ca30, internal_636ca30, public_636ca30);
extern "C" NAKED register_t __cdecl internal_636ca30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398870 @0x636ca32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398870
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push esi
        push edi
        xor edi, edi
        push edi
        mov esi, ecx
        push 0x10
        push 0x400
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x28], esi
        call public_6356a40
        mov dword ptr ss : [esp+0x40], edi
        mov word ptr ss : [esp+0x20], di
        mov word ptr ss : [esp+0x22], di
        mov dword ptr ss : [esp+0x24], edi
        xor edx, edx
        mov dx, word ptr ds : [esi+2]
        mov byte ptr ss : [esp+0x40], 1
        dec edx
        mov dword ptr ss : [esp+0x10], edx
        js public_636cb77
        push ebx
        push ebp
        public_636ca8d : nop
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+edx*4]
        movsx ecx, word ptr ds : [eax+0xC]
        mov ebp, dword ptr ds : [eax]
        add ebp, eax
        dec ecx
        js public_636cb6a
        add eax, 0x14
        inc ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        public_636caae : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, 3
        public_636cab7 : nop
        mov esi, dword ptr ds : [edi]
        and esi, 0xFFFF
        shl esi, 4
        add esi, ebp
        push esi
        lea ecx, ss:[esp+0x34]
        call public_6356ac0
        test eax, eax
        jne public_636cb3c
        push esi
        push esi
        lea ecx, ss:[esp+0x38]
        call public_6356b40
        push 0x10
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_636cb0f
        fld dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x1C], ecx
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], edx
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x20]
        mov esi, eax
        fstp dword ptr ds : [eax+8]
        jmp public_636cb11
        public_636cb0f : nop
        xor esi, esi
        public_636cb11 : nop
        mov ax, word ptr ss : [esp+0x2A]
        cmp ax, word ptr ss : [esp+0x28]
        jb public_636cb26
        lea ecx, ss:[esp+0x28]
        call public_63441a0
        public_636cb26 : nop
        mov ecx, dword ptr ss : [esp+0x2A]
        mov edx, dword ptr ss : [esp+0x2C]
        and ecx, 0xFFFF
        mov dword ptr ds : [edx+ecx*4], esi
        inc word ptr ss : [esp+0x2A]
        public_636cb3c : nop
        add edi, 4
        dec ebx
        jne public_636cab7
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        add ecx, 0x10
        dec eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_636caae
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x24]
        xor edi, edi
        public_636cb6a : nop
        dec edx
        mov dword ptr ss : [esp+0x18], edx
        jns public_636ca8d
        pop ebp
        pop ebx
        public_636cb77 : nop
        lea eax, ss:[esp+0x20]
        push eax
        call public_636c9a0
        mov dword ptr ds : [esi+8], eax
        mov esi, dword ptr ss : [esp+0x26]
        and esi, 0xFFFF
        add esp, 4
        dec esi
        js public_636cba7
        public_636cb94 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ecx+esi*4]
        push eax
        call public_6391d5a
        add esp, 4
        dec esi
        jns public_636cb94
        public_636cba7 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea edx, ss:[esp+0x28]
        cmp eax, edx
        mov byte ptr ss : [esp+0x40], 0
        je public_636cbce
        cmp eax, edi
        je public_636cbc5
        push eax
        call public_6343fb0
        add esp, 4
        public_636cbc5 : nop
        mov dword ptr ss : [esp+0x24], edi
        mov word ptr ss : [esp+0x20], di
        public_636cbce : nop
        lea ecx, ss:[esp+0x28]
        mov word ptr ss : [esp+0x22], di
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call public_6356a70
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x636ca30)
    }
}

#undef public_636ca8d
#undef public_636caae
#undef public_636cab7
#undef public_636cb0f
#undef public_636cb11
#undef public_636cb26
#undef public_636cb3c
#undef public_636cb6a
#undef public_636cb77
#undef public_636cb94
#undef public_636cba7
#undef public_636cbc5
#undef public_636cbce
