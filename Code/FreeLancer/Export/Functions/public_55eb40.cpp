#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_55eb80 _public_55eb80
#define public_55eba9 _public_55eba9
#define public_55ec07 _public_55ec07
#define public_55ec66 _public_55ec66
#define public_55ecc4 _public_55ecc4
#define public_55ecf6 _public_55ecf6
#define public_55ed03 _public_55ed03
#define public_55ed35 _public_55ed35
#define public_55ed42 _public_55ed42
#define public_55ed6e _public_55ed6e
#define public_55ede1 _public_55ede1
#define public_55ee52 _public_55ee52
#define public_55ee70 _public_55ee70

PROC_DECLARE(0x55eb40, internal_55eb40, public_55eb40);
extern "C" NAKED register_t __cdecl internal_55eb40()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x34]
        push ebx
        push ebp
        push esi
        push 0
        push eax
        mov ebp, ecx
        call public_4b5060
        mov esi, dword ptr ss : [esp+0x44]
        test esi, esi
        mov bl, al
        mov byte ptr ss : [esp+0xF], bl
        je public_55ee70
        test bl, bl
        je public_55ee70
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_55ee70
        push edi
        nop 
        public_55eb80 : nop
        mov edi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5dba88 @0x55eb86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dba88
        mov ecx, esi
        call edi
        test al, al
        je public_55eba9
        mov ebx, dword ptr ss : [ebp]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6698]
        push eax
        mov ecx, ebp
        call dword ptr ds : [ebx+0x98]
/*FIXUP public_55eba9 : nop
        push offset public_5e1708 @0x55eba9*/
  FIXUP public_55eba9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1708
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_55ec07
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x18]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x28]
        fld qword ptr ss : [esp+0x18]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x30]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[ebp+0xA8]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        jmp public_55ee52
/*FIXUP public_55ec07 : nop
        push offset public_5dd344 @0x55ec07*/
  FIXUP public_55ec07 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd344
        call edi
        test al, al
        je public_55ec66
        lea edi, ss:[ebp+0x2F8]
        mov ecx, edi
        call public_4215b0
        mov ecx, dword ptr ss : [esp+0x44]
        xor eax, eax
        cmp ecx, eax
        mov dword ptr ds : [edi+0x2C], eax
        mov dword ptr ds : [edi+0x28], eax
        mov dword ptr ds : [edi+0x24], eax
        je public_55ee52
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov ebx, eax
        test ebx, ebx
        je public_55ee52
        mov eax, dword ptr ds : [ebx]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_5c6698]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        call dword ptr ds : [eax+0x90]
        jmp public_55ee52
/*FIXUP public_55ec66 : nop
        push offset public_5e16fc @0x55ec66*/
  FIXUP public_55ec66 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16fc
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_55ecc4
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x18]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x34]
        fld qword ptr ss : [esp+0x18]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x3C]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        lea ecx, ss:[ebp+0xB4]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        jmp public_55ee52
/*FIXUP public_55ecc4 : nop
        push offset public_5e19e8 @0x55ecc4*/
  FIXUP public_55ecc4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e19e8
        call edi
        test al, al
        mov ecx, esi
        je public_55ed03
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_55ecf6
        mov eax, 1
        mov byte ptr ss : [ebp+0x348], al
        jmp public_55ee52
        public_55ecf6 : nop
        xor eax, eax
        mov byte ptr ss : [ebp+0x348], al
        jmp public_55ee52
/*FIXUP public_55ed03 : nop
        push offset public_5e16b8 @0x55ed03*/
  FIXUP public_55ed03 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16b8
        call edi
        test al, al
        mov ecx, esi
        je public_55ed42
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_55ed35
        mov eax, 1
        mov byte ptr ss : [ebp+0x34A], al
        jmp public_55ee52
        public_55ed35 : nop
        xor eax, eax
        mov byte ptr ss : [ebp+0x34A], al
        jmp public_55ee52
/*FIXUP public_55ed42 : nop
        push offset public_5e16ac @0x55ed42*/
  FIXUP public_55ed42 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16ac
        call edi
        test al, al
        mov ecx, esi
        je public_55ed6e
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ss : [ebp+0x32C], eax
        mov byte ptr ss : [ebp+0x34A], 1
        jmp public_55ee52
/*FIXUP public_55ed6e : nop
        push offset public_5c7f6c @0x55ed6e*/
  FIXUP public_55ed6e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f6c
        call edi
        test al, al
        mov ecx, esi
        je public_55ede1
        push 2
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x20]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x18]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        fld qword ptr ss : [esp+0x18]
        mov byte ptr ss : [esp+0x48], al
        call public_5b7ec0
        fld qword ptr ss : [esp+0x20]
        mov byte ptr ss : [esp+0x49], al
        call public_5b7ec0
        push 3
        mov ecx, esi
        mov byte ptr ss : [esp+0x4E], al
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov byte ptr ss : [esp+0x4B], al
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [ebp+0x340], eax
        jmp public_55ee52
/*FIXUP public_55ede1 : nop
        push offset public_5e19d8 @0x55ede1*/
  FIXUP public_55ede1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e19d8
        call edi
        test al, al
        je public_55ee52
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x18]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x20]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        fld qword ptr ss : [esp+0x20]
        mov byte ptr ss : [esp+0x14], al
        call public_5b7ec0
        fld qword ptr ss : [esp+0x18]
        mov byte ptr ss : [esp+0x15], al
        call public_5b7ec0
        push 3
        mov ecx, esi
        mov byte ptr ss : [esp+0x1A], al
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov byte ptr ss : [esp+0x17], al
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+0x344], ecx
        public_55ee52 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_55eb80
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 8
        public_55ee70 : nop
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x55eb40)
    }
}

#undef public_55eb80
#undef public_55eba9
#undef public_55ec07
#undef public_55ec66
#undef public_55ecc4
#undef public_55ecf6
#undef public_55ed03
#undef public_55ed35
#undef public_55ed42
#undef public_55ed6e
#undef public_55ede1
#undef public_55ee52
#undef public_55ee70
