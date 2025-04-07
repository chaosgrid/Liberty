#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d466f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d583b0);

#define public_6d51d68 _public_6d51d68
#define public_6d51db1 _public_6d51db1
#define public_6d51dca _public_6d51dca
#define public_6d51dff _public_6d51dff
#define public_6d51e28 _public_6d51e28
#define public_6d51e46 _public_6d51e46
#define public_6d51e8e _public_6d51e8e
#define public_6d51e98 _public_6d51e98
#define public_6d51ec5 _public_6d51ec5
#define public_6d51f01 _public_6d51f01
#define public_6d51f0b _public_6d51f0b
#define public_6d51f32 _public_6d51f32
#define public_6d51f99 _public_6d51f99
#define public_6d51faa _public_6d51faa
#define public_6d51fc1 _public_6d51fc1

PROC_DECLARE(0x6d51d20, internal_6d51d20, public_6d51d20);
extern "C" NAKED register_t __cdecl internal_6d51d20()
{
    __asm
    {
        sub esp, 0x418
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x428]
        mov esi, ecx
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ds:[esi+0x44]
        call public_6d583b0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+0x48]
        je public_6d51fc1
        mov ebp, dword ptr ds : [eax+0x1C]
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_6d51fc1
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        jne public_6d51d68
        mov esi, offset public_6d64efc
        public_6d51d68 : nop
        mov edi, dword ptr ds : [public_6d647e8]
        push ebx
        call edi
        test al, al
        je public_6d51ec5
        push esi
        call dword ptr ds : [public_6d64c98]
        mov ebx, eax
        push ebx
        call dword ptr ds : [public_6d64ca0]
        push ebx
        call dword ptr ds : [public_6d64c80]
        mov edi, dword ptr ds : [public_6d90144]
        mov ebp, eax
        lea eax, ss:[ebp+ebp]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ds : [public_6d90150], edi
        mov esi, ebx
        jle public_6d51dca
        mov edi, eax
        public_6d51db1 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        mov ecx, offset public_6d8fd38
        inc esi
        push eax
        call public_6d466f0
        dec edi
        jne public_6d51db1
        mov edi, dword ptr ds : [public_6d90150]
        public_6d51dca : nop
        mov al, byte ptr ds : [public_6d9014c]
        test al, al
        mov eax, dword ptr ds : [public_6d9013c]
        lea ecx, ds:[eax-1]
        jne public_6d51dff
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [public_6d90148]
        xor ecx, edi
        lea edx, ds:[edx+edx-1]
        or edx, 1
        and edx, ecx
        mov ecx, dword ptr ds : [public_6d90138]
        sub ecx, eax
        shl edx, cl
        jmp public_6d51e46
        public_6d51dff : nop
        mov eax, 1
        shl eax, cl
        mov ecx, dword ptr ds : [public_6d90148]
        xor ecx, edi
        mov edi, dword ptr ds : [public_6d90138]
        lea eax, ds:[eax+eax-1]
        or eax, 1
        mov esi, 8
        xor edx, edx
        and eax, ecx
        cmp edi, esi
        jb public_6d51e46
        public_6d51e28 : nop
        mov ebp, eax
        mov ecx, edi
        sub ecx, esi
        and ebp, 0xFF
        shl ebp, cl
        add esi, 8
        shr eax, 8
        or edx, ebp
        cmp esi, edi
        jbe public_6d51e28
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d51e46 : nop
        push edx
        push ebp
        lea edx, ss:[esp+0x124]
/*FIXUP push offset public_6d6aec0 @0x6d51e4f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aec0
        push edx
        call dword ptr ds : [public_6d64c74]
        push ebx
        call dword ptr ds : [public_6d64c94]
        lea eax, ss:[esp+0x2C]
        push eax
        call dword ptr ds : [public_6d64874]
        add esp, 0x18
        call dword ptr ds : [public_6d647e8]
        test al, al
        mov esi, dword ptr ds : [public_6d64bc0]
        push 0
        je public_6d51e8e
/*FIXUP push offset public_6d8d308 @0x6d51e82*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea ecx, ss:[esp+0x20]
        push ecx
        jmp public_6d51e98
/*FIXUP public_6d51e8e : nop
        push offset public_6d8d200 @0x6d51e8e*/
  FIXUP public_6d51e8e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea edx, ss:[esp+0x20]
        push edx
        public_6d51e98 : nop
        push 0
/*FIXUP push offset public_6d90158 @0x6d51e9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call esi
        add esp, 0x14
        push 0
        lea eax, ss:[esp+0x120]
        push eax
/*FIXUP push offset public_6d90158 @0x6d51eae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        lea ecx, ss:[esp+0x330]
        push 0
        push ecx
        call esi
        mov ebp, dword ptr ss : [esp+0x28]
        jmp public_6d51f32
        public_6d51ec5 : nop
        push 0x104
        lea edx, ss:[esp+0x120]
        push esi
        push edx
        call dword ptr ds : [public_6d64be0]
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [public_6d64874]
        add esp, 0x10
        call edi
        test al, al
        mov esi, dword ptr ds : [public_6d64bc0]
        push 0
        je public_6d51f01
/*FIXUP push offset public_6d8d308 @0x6d51ef5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea ecx, ss:[esp+0x20]
        push ecx
        jmp public_6d51f0b
/*FIXUP public_6d51f01 : nop
        push offset public_6d8d200 @0x6d51f01*/
  FIXUP public_6d51f01 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea edx, ss:[esp+0x20]
        push edx
        public_6d51f0b : nop
        push 0
/*FIXUP push offset public_6d90158 @0x6d51f0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call esi
        add esp, 0x14
        push 0
        lea eax, ss:[esp+0x120]
        push eax
/*FIXUP push offset public_6d90158 @0x6d51f21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        lea ecx, ss:[esp+0x330]
        push 0
        push ecx
        call esi
        public_6d51f32 : nop
        add esp, 0x14
        push 0
/*FIXUP push offset public_6d6b8b0 @0x6d51f37*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b8b0
        lea edx, ss:[esp+0x32C]
        push edx
        lea eax, ss:[esp+0x22C]
        push 0
        push eax
        call esi
        mov bl, byte ptr ss : [esp+0x444]
        add esp, 0x14
        test bl, bl
        je public_6d51f99
        lea ecx, ss:[esp+0x220]
/*FIXUP push offset public_6d6b4e4 @0x6d51f65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b4e4
        push ecx
        call dword ptr ds : [public_6d64bd8]
        add esp, 8
        test eax, eax
        je public_6d51faa
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        test bl, bl
        pop ebx
        pop edi
        sete al
        mov byte ptr ss : [ebp+0x31], al
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x418
        ret 8
        public_6d51f99 : nop
        lea edx, ss:[esp+0x220]
        push edx
        call dword ptr ds : [public_6d64cac]
        add esp, 4
        public_6d51faa : nop
        test bl, bl
        pop ebx
        pop edi
        sete al
        mov byte ptr ss : [ebp+0x31], al
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x418
        ret 8
        public_6d51fc1 : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 0x418
        ret 8
        UNREACHABLE_TRAP(0x6d51d20)
    }
}

#undef public_6d51d68
#undef public_6d51db1
#undef public_6d51dca
#undef public_6d51dff
#undef public_6d51e28
#undef public_6d51e46
#undef public_6d51e8e
#undef public_6d51e98
#undef public_6d51ec5
#undef public_6d51f01
#undef public_6d51f0b
#undef public_6d51f32
#undef public_6d51f99
#undef public_6d51faa
#undef public_6d51fc1
