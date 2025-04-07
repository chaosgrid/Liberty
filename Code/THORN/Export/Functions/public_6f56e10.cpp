#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f56e10);

#define public_6f56e42 _public_6f56e42
#define public_6f56e61 _public_6f56e61
#define public_6f56e7e _public_6f56e7e
#define public_6f56e9a _public_6f56e9a
#define public_6f56eb2 _public_6f56eb2
#define public_6f56ece _public_6f56ece
#define public_6f56ee6 _public_6f56ee6
#define public_6f56f02 _public_6f56f02
#define public_6f56f1a _public_6f56f1a
#define public_6f56f36 _public_6f56f36
#define public_6f56f4e _public_6f56f4e
#define public_6f56f6a _public_6f56f6a
#define public_6f56f82 _public_6f56f82
#define public_6f56f9e _public_6f56f9e
#define public_6f56fb3 _public_6f56fb3
#define public_6f56fcf _public_6f56fcf
#define public_6f56fe8 _public_6f56fe8
#define public_6f57003 _public_6f57003
#define public_6f5701e _public_6f5701e
#define public_6f57029 _public_6f57029
#define public_6f5702b _public_6f5702b
#define public_6f57040 _public_6f57040
#define public_6f57050 _public_6f57050
#define public_6f5705a _public_6f5705a
#define public_6f57065 _public_6f57065

PROC_DECLARE(0x6f56e10, internal_6f56e10, public_6f56e10);
extern "C" NAKED register_t __cdecl internal_6f56e10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        push ebx
        call dword ptr ds : [public_6f5a15c]
        add eax, 0xFFFFFF9F
        add esp, 4
        cmp eax, 0x19
        ja public_6f57065
        mov edi, dword ptr ds : [public_6f5a0c4]
/*FIXUP xor ecx, ecx @0x6f56e33*/
/*FIXUP mov cl, byte ptr ds : [eax+public_6f570a0] @0x6f56e35*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6f57074] @0x6f56e3b*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6f56e42
  JMPTB cmp eax, 1
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 2
  JMPTB mov ecx, 1
  JMPTB je public_6f56e7e
  JMPTB cmp eax, 3
  JMPTB mov ecx, 2
  JMPTB je public_6f56eb2
  JMPTB cmp eax, 4
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 5
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 6
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 7
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 8
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 9
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 3
  JMPTB je public_6f56ee6
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 4
  JMPTB je public_6f56f1a
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 5
  JMPTB je public_6f56f4e
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 6
  JMPTB je public_6f56f82
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 7
  JMPTB je public_6f56fb3
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 8
  JMPTB je public_6f56fe8
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 0xA
  JMPTB je public_6f57065
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 9
  JMPTB je public_6f5701e
  JMPTB int 3
        public_6f56e42 : nop
        mov edx, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [edx], 1
        jle public_6f56e61
        mov eax, dword ptr ss : [esp+0x10]
        push 0x103
        push eax
        call edi
        add esp, 8
        jmp public_6f57029
        public_6f56e61 : nop
        mov ecx, dword ptr ds : [public_6f5a0bc]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x10]
        xor esi, esi
        mov si, word ptr ds : [edx+eax*2]
        and esi, 0x103
        jmp public_6f5702b
        public_6f56e7e : nop
        mov ecx, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [ecx], 1
        jle public_6f56e9a
        mov edx, dword ptr ss : [esp+0x10]
        push 0x20
        push edx
        call edi
        add esp, 8
        jmp public_6f57029
        public_6f56e9a : nop
        mov eax, dword ptr ds : [public_6f5a0bc]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov al, byte ptr ds : [ecx+edx*2]
        and eax, 0x20
        jmp public_6f57029
        public_6f56eb2 : nop
        mov ecx, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [ecx], 1
        jle public_6f56ece
        mov edx, dword ptr ss : [esp+0x10]
        push 4
        push edx
        call edi
        add esp, 8
        jmp public_6f57029
        public_6f56ece : nop
        mov eax, dword ptr ds : [public_6f5a0bc]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov al, byte ptr ds : [ecx+edx*2]
        and eax, 4
        jmp public_6f57029
        public_6f56ee6 : nop
        mov ecx, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [ecx], 1
        jle public_6f56f02
        mov edx, dword ptr ss : [esp+0x10]
        push 2
        push edx
        call edi
        add esp, 8
        jmp public_6f57029
        public_6f56f02 : nop
        mov eax, dword ptr ds : [public_6f5a0bc]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov al, byte ptr ds : [ecx+edx*2]
        and eax, 2
        jmp public_6f57029
        public_6f56f1a : nop
        mov ecx, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [ecx], 1
        jle public_6f56f36
        mov edx, dword ptr ss : [esp+0x10]
        push 0x10
        push edx
        call edi
        add esp, 8
        jmp public_6f57029
        public_6f56f36 : nop
        mov eax, dword ptr ds : [public_6f5a0bc]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov al, byte ptr ds : [ecx+edx*2]
        and eax, 0x10
        jmp public_6f57029
        public_6f56f4e : nop
        mov ecx, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [ecx], 1
        jle public_6f56f6a
        mov edx, dword ptr ss : [esp+0x10]
        push 8
        push edx
        call edi
        add esp, 8
        jmp public_6f57029
        public_6f56f6a : nop
        mov eax, dword ptr ds : [public_6f5a0bc]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov al, byte ptr ds : [ecx+edx*2]
        and eax, 8
        jmp public_6f57029
        public_6f56f82 : nop
        mov ecx, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [ecx], 1
        jle public_6f56f9e
        mov edx, dword ptr ss : [esp+0x10]
        push 1
        push edx
        call edi
        add esp, 8
        jmp public_6f57029
        public_6f56f9e : nop
        mov eax, dword ptr ds : [public_6f5a0bc]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov al, byte ptr ds : [ecx+edx*2]
        and eax, 1
        jmp public_6f57029
        public_6f56fb3 : nop
        mov ecx, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [ecx], 1
        jle public_6f56fcf
        mov edx, dword ptr ss : [esp+0x10]
        push 0x107
        push edx
        call edi
        add esp, 8
        jmp public_6f57029
        public_6f56fcf : nop
        mov eax, dword ptr ds : [public_6f5a0bc]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x10]
        xor esi, esi
        mov si, word ptr ds : [ecx+edx*2]
        and esi, 0x107
        jmp public_6f5702b
        public_6f56fe8 : nop
        mov eax, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [eax], 1
        jle public_6f57003
        mov ecx, dword ptr ss : [esp+0x10]
        push 0x80
        push ecx
        call edi
        add esp, 8
        jmp public_6f57029
        public_6f57003 : nop
        mov edx, dword ptr ds : [public_6f5a0bc]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x10]
        xor edx, edx
        mov dl, byte ptr ds : [eax+ecx*2]
        and edx, 0x80
        mov esi, edx
        jmp public_6f5702b
        public_6f5701e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        xor eax, eax
        test ecx, ecx
        sete al
        public_6f57029 : nop
        mov esi, eax
        public_6f5702b : nop
        mov ecx, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [ecx], 1
        jle public_6f57040
        push 2
        push ebx
        call edi
        add esp, 8
        jmp public_6f57050
        public_6f57040 : nop
        mov edx, dword ptr ds : [public_6f5a0bc]
        xor eax, eax
        mov eax, dword ptr ds : [edx]
        mov al, byte ptr ds : [eax+ebx*2]
        and eax, 2
        public_6f57050 : nop
        test eax, eax
        je public_6f5705a
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 
        public_6f5705a : nop
        xor eax, eax
        pop edi
        test esi, esi
        pop esi
        sete al
        pop ebx
        ret 
        public_6f57065 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        xor eax, eax
        cmp ebx, ecx
        pop esi
        sete al
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f56e10)
        ASM_EXPORT_ENTRY_FIRST(0x6f56e42, public_6f56e42)
        ASM_EXPORT_ENTRY(0x6f56e7e, public_6f56e7e)
        ASM_EXPORT_ENTRY(0x6f56eb2, public_6f56eb2)
        ASM_EXPORT_ENTRY(0x6f56ee6, public_6f56ee6)
        ASM_EXPORT_ENTRY(0x6f56f1a, public_6f56f1a)
        ASM_EXPORT_ENTRY(0x6f56f4e, public_6f56f4e)
        ASM_EXPORT_ENTRY(0x6f56f82, public_6f56f82)
        ASM_EXPORT_ENTRY(0x6f56fb3, public_6f56fb3)
        ASM_EXPORT_ENTRY(0x6f56fe8, public_6f56fe8)
        ASM_EXPORT_ENTRY(0x6f5701e, public_6f5701e)
        ASM_EXPORT_ENTRY_LAST(0x6f57065, public_6f57065)
    }
}

#undef public_6f56e42
#undef public_6f56e61
#undef public_6f56e7e
#undef public_6f56e9a
#undef public_6f56eb2
#undef public_6f56ece
#undef public_6f56ee6
#undef public_6f56f02
#undef public_6f56f1a
#undef public_6f56f36
#undef public_6f56f4e
#undef public_6f56f6a
#undef public_6f56f82
#undef public_6f56f9e
#undef public_6f56fb3
#undef public_6f56fcf
#undef public_6f56fe8
#undef public_6f57003
#undef public_6f5701e
#undef public_6f57029
#undef public_6f5702b
#undef public_6f57040
#undef public_6f57050
#undef public_6f5705a
#undef public_6f57065

#pragma init_seg(compiler)
extern "C" void const* const public_6f56e42 = __AsmFindLabelExport(&internal_6f56e10, 0x6f56e42);
extern "C" void const* const public_6f56e7e = __AsmFindLabelExport(&internal_6f56e10, 0x6f56e7e);
extern "C" void const* const public_6f56eb2 = __AsmFindLabelExport(&internal_6f56e10, 0x6f56eb2);
extern "C" void const* const public_6f56ee6 = __AsmFindLabelExport(&internal_6f56e10, 0x6f56ee6);
extern "C" void const* const public_6f56f1a = __AsmFindLabelExport(&internal_6f56e10, 0x6f56f1a);
extern "C" void const* const public_6f56f4e = __AsmFindLabelExport(&internal_6f56e10, 0x6f56f4e);
extern "C" void const* const public_6f56f82 = __AsmFindLabelExport(&internal_6f56e10, 0x6f56f82);
extern "C" void const* const public_6f56fb3 = __AsmFindLabelExport(&internal_6f56e10, 0x6f56fb3);
extern "C" void const* const public_6f56fe8 = __AsmFindLabelExport(&internal_6f56e10, 0x6f56fe8);
extern "C" void const* const public_6f5701e = __AsmFindLabelExport(&internal_6f56e10, 0x6f5701e);
extern "C" void const* const public_6f57065 = __AsmFindLabelExport(&internal_6f56e10, 0x6f57065);
