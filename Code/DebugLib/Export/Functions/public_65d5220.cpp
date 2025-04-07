#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5220);
CLANG_FORWARD_PROC_SYMBOL(public_65d5360);
CLANG_FORWARD_PROC_SYMBOL(public_65d5410);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_JUMP_SYMBOL(public_65e006b);

#define public_65d5268 _public_65d5268
#define public_65d5271 _public_65d5271
#define public_65d5294 _public_65d5294
#define public_65d529d _public_65d529d
#define public_65d52c0 _public_65d52c0
#define public_65d52c9 _public_65d52c9
#define public_65d52e2 _public_65d52e2
#define public_65d52f9 _public_65d52f9

PROC_DECLARE(0x65d5220, internal_65d5220, public_65d5220);
extern "C" NAKED register_t __cdecl internal_65d5220()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65e006b @0x65d5222*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65e006b
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
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_65e1404
        mov eax, dword ptr ds : [esi+0x48]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_65d5271
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_65d5268
        cmp cl, 0xFF
        je public_65d5268
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_65d5271
        public_65d5268 : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d5271 : nop
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, ebx
        je public_65d529d
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_65d5294
        cmp cl, 0xFF
        je public_65d5294
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_65d529d
        public_65d5294 : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d529d : nop
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov eax, dword ptr ds : [esi+0x28]
        cmp eax, ebx
        je public_65d52c9
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_65d52c0
        cmp cl, 0xFF
        je public_65d52c0
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_65d52c9
        public_65d52c0 : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d52c9 : nop
        lea ebp, ds:[esi+0x18]
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x10], eax
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_65d52f9
        public_65d52e2 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        call public_65d5410
        cmp edi, dword ptr ss : [esp+0x10]
        jne public_65d52e2
        public_65d52f9 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_65d6cb8
        add esi, 4
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        add esp, 4
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        push eax
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_65d5360
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_65d6cb8
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebx
        push eax
        mov dword ptr ds : [esi+0x10], ebx
        call public_65d6cb8
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x65d5220)
    }
}

#undef public_65d5268
#undef public_65d5271
#undef public_65d5294
#undef public_65d529d
#undef public_65d52c0
#undef public_65d52c9
#undef public_65d52e2
#undef public_65d52f9
