#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6370d70);
CLANG_FORWARD_PROC_SYMBOL(public_6372a30);
CLANG_FORWARD_PROC_SYMBOL(public_6374910);
CLANG_FORWARD_PROC_SYMBOL(public_6377cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_637dc10);
CLANG_FORWARD_PROC_SYMBOL(public_637de20);
CLANG_FORWARD_PROC_SYMBOL(public_6383530);
CLANG_FORWARD_PROC_SYMBOL(public_639211c);

#define public_637dc22 _public_637dc22
#define public_637dc6a _public_637dc6a
#define public_637dc7a _public_637dc7a
#define public_637dcd3 _public_637dcd3
#define public_637dce1 _public_637dce1
#define public_637dcf2 _public_637dcf2
#define public_637dd2f _public_637dd2f
#define public_637dd3f _public_637dd3f
#define public_637dd91 _public_637dd91
#define public_637dda5 _public_637dda5
#define public_637ddad _public_637ddad
#define public_637ddb3 _public_637ddb3
#define public_637ddcb _public_637ddcb
#define public_637de0d _public_637de0d

PROC_DECLARE(0x637dc10, internal_637dc10, public_637dc10);
extern "C" NAKED register_t __cdecl internal_637dc10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov dword ptr ds : [public_658b864], 1
        xor ebx, ebx
        public_637dc22 : nop
        push ebx
/*FIXUP push offset public_658b78c @0x637dc23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b78c
        call public_639211c
        mov esi, eax
        add esp, 8
        cmp esi, ebx
        je public_637dc7a
        fld qword ptr ds : [public_658bec8]
        mov eax, dword ptr ds : [public_658bec0]
        fcomp qword ptr ds : [public_658b878]
        inc eax
        mov dword ptr ds : [public_658bec0], eax
        fnstsw ax
        test ah, 1
        je public_637dc6a
        mov eax, dword ptr ds : [public_658b878]
        mov ecx, dword ptr ds : [public_658b87c]
        mov dword ptr ds : [public_658bec8], eax
        mov dword ptr ds : [public_658becc], ecx
        public_637dc6a : nop
        mov dword ptr ds : [public_658b91c], ebx
        mov dword ptr ds : [public_658b1f4], 1
        public_637dc7a : nop
        mov ecx, dword ptr ds : [public_658b1d4]
        cmp ecx, ebx
        jne public_637dce1
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_637dce1
        mov eax, dword ptr ds : [public_658b868]
        cmp eax, 0x64
        jle public_637dcd3
        mov edx, dword ptr ds : [public_658b87c]
        mov ecx, dword ptr ds : [public_658b878]
        push edx
        mov edx, dword ptr ds : [public_658b7fc]
        push ecx
        push eax
/*FIXUP push offset public_63f5450 @0x637dcb6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5450
        push edx
        call dword ptr ds : [public_63991e8]
        push ebx
        push ebx
        push 5
        call public_6378600
        mov eax, dword ptr ds : [public_658b868]
        add esp, 0x20
        public_637dcd3 : nop
        cmp eax, ebx
        je public_637dcf2
        cmp esi, ebx
        je public_637de0d
        jmp public_637dcf2
        public_637dce1 : nop
        mov eax, dword ptr ds : [public_658b868]
        cmp eax, ebx
        je public_637dcf2
        cmp eax, ecx
        jge public_637de0d
        public_637dcf2 : nop
        push 1
        mov dword ptr ds : [public_658b1f4], ebx
        call public_6374910
        mov edx, dword ptr ds : [public_658b868]
        mov eax, dword ptr ds : [public_658b66c]
        add esp, 4
        inc edx
        cmp eax, ebx
        mov dword ptr ds : [public_658b868], edx
        jne public_637dd2f
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_658b468
        repne scasb
        not ecx
        dec ecx
        mov dword ptr ds : [public_658b66c], ecx
        jmp public_637dd3f
        public_637dd2f : nop
        mov byte ptr ds : [eax+public_658b468], bl
        mov dword ptr ds : [public_658b668], 0x50
        public_637dd3f : nop
        push ebx
/*FIXUP push offset public_658b868 @0x637dd40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b868
/*FIXUP push offset public_63f5448 @0x637dd45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5448
        call public_6377cf0
        mov eax, dword ptr ds : [public_658b868]
        mov ecx, dword ptr ds : [public_658b1d4]
        add esp, 0xC
        cmp eax, ecx
        jne public_637ddb3
        cmp dword ptr ds : [public_658b208], 0xFFFFFFFF
        mov ecx, dword ptr ds : [public_658b204]
        mov dword ptr ds : [public_658b078], ecx
        jne public_637dd91
        fld qword ptr ds : [public_658b210]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        jne public_637dd91
        cmp dword ptr ds : [public_658b218], ebx
        je public_637ddad
        public_637dd91 : nop
        cmp ecx, ebx
        mov dword ptr ds : [public_658b200], ecx
        jne public_637dda5
        mov dword ptr ds : [public_658b200], 3
        public_637dda5 : nop
        xor ecx, ecx
        mov dword ptr ds : [public_658b078], ecx
        public_637ddad : nop
        mov dword ptr ds : [public_658b998], ecx
        public_637ddb3 : nop
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_637ddcb
        call public_6383530
        public_637ddcb : nop
        call public_6372a30
        call public_637de20
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_637dc22
        cmp dword ptr ds : [public_658b0a8], ebx
        jne public_637dc22
        mov ecx, dword ptr ds : [public_658b810]
        push ebx
        push ecx
        call public_6370d70
        add esp, 8
        jmp public_637dc22
        public_637de0d : nop
        pop edi
        pop esi
        mov dword ptr ds : [public_658b864], ebx
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x637dc10)
    }
}

#undef public_637dc22
#undef public_637dc6a
#undef public_637dc7a
#undef public_637dcd3
#undef public_637dce1
#undef public_637dcf2
#undef public_637dd2f
#undef public_637dd3f
#undef public_637dd91
#undef public_637dda5
#undef public_637ddad
#undef public_637ddb3
#undef public_637ddcb
#undef public_637de0d
