#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bc2d0);

#define public_62bbe8c _public_62bbe8c
#define public_62bbea0 _public_62bbea0
#define public_62bbee3 _public_62bbee3
#define public_62bbee5 _public_62bbee5
#define public_62bbeec _public_62bbeec
#define public_62bbef5 _public_62bbef5
#define public_62bbf10 _public_62bbf10
#define public_62bbf42 _public_62bbf42
#define public_62bbf47 _public_62bbf47
#define public_62bbf50 _public_62bbf50
#define public_62bbf59 _public_62bbf59
#define public_62bbf71 _public_62bbf71
#define public_62bbf80 _public_62bbf80
#define public_62bbfb2 _public_62bbfb2
#define public_62bbfb4 _public_62bbfb4
#define public_62bbfbb _public_62bbfbb
#define public_62bbfbd _public_62bbfbd

PROC_DECLARE(0x62bbe70, internal_62bbe70, public_62bbe70);
extern "C" NAKED register_t __cdecl internal_62bbe70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        xor al, al
        cmp ecx, 3
        ja public_62bbfbd
/*FIXUP jmp dword ptr ds : [ecx*4+public_62bbfc4] @0x62bbe85*/
  JMPTB cmp ecx, 0
  JMPTB je public_62bbe8c
  JMPTB cmp ecx, 1
  JMPTB je public_62bbef5
  JMPTB cmp ecx, 2
  JMPTB je public_62bbf59
  JMPTB cmp ecx, 3
  JMPTB je public_62bbf71
  JMPTB int 3
        public_62bbe8c : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], 0xBF800000
        mov esi, dword ptr ds : [edi+8]
        mov ebp, dword ptr ds : [edi+0xC]
        xor cl, cl
        mov edi, edi
        public_62bbea0 : nop
        cmp esi, ebp
        je public_62bbeec
        mov edx, dword ptr ds : [esi]
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [edi+0x14]
        fnstsw ax
        test ah, 0x41
        je public_62bbeec
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62bbee3
        mov edx, dword ptr ds : [esi]
        fld dword ptr ds : [edx+0xC]
        mov cl, 1
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test cl, ah
        jne public_62bbee5
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ebx], eax
        public_62bbee3 : nop
        xor cl, cl
        public_62bbee5 : nop
        add esi, 4
        test cl, cl
        je public_62bbea0
        public_62bbeec : nop
        pop edi
        pop esi
        pop ebp
        mov al, cl
        pop ebx
        ret 0xC
        public_62bbef5 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp], 0xBF800000
        mov esi, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+0xC]
        lea ebx, ds:[ebx]
        public_62bbf10 : nop
        cmp esi, edi
        je public_62bbf50
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62bbf42
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ds : [ecx+0xC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62bbf47
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [ebp], eax
        public_62bbf42 : nop
        add esi, 4
        jmp public_62bbf10
        public_62bbf47 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 0xC
        public_62bbf50 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0xC
        public_62bbf59 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        mov ecx, edi
        call public_62bc2d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_62bbf71 : nop
        mov esi, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ss : [esp+0x14]
        xor dl, dl
        lea ecx, ds:[ecx]
        public_62bbf80 : nop
        cmp esi, ebx
        je public_62bbfbb
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [edi+0x18]
        fnstsw ax
        test ah, 0x41
        je public_62bbfbb
        mov al, byte ptr ds : [ecx+9]
        test al, al
        je public_62bbfb4
        mov ecx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [eax]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62bbfb2
        mov dl, 1
        jmp public_62bbfb4
        public_62bbfb2 : nop
        xor dl, dl
        public_62bbfb4 : nop
        add esi, 4
        test dl, dl
        je public_62bbf80
        public_62bbfbb : nop
        mov al, dl
        public_62bbfbd : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62bbe70)
        ASM_EXPORT_ENTRY_FIRST(0x62bbe8c, public_62bbe8c)
        ASM_EXPORT_ENTRY(0x62bbef5, public_62bbef5)
        ASM_EXPORT_ENTRY(0x62bbf59, public_62bbf59)
        ASM_EXPORT_ENTRY_LAST(0x62bbf71, public_62bbf71)
    }
}

#undef public_62bbe8c
#undef public_62bbea0
#undef public_62bbee3
#undef public_62bbee5
#undef public_62bbeec
#undef public_62bbef5
#undef public_62bbf10
#undef public_62bbf42
#undef public_62bbf47
#undef public_62bbf50
#undef public_62bbf59
#undef public_62bbf71
#undef public_62bbf80
#undef public_62bbfb2
#undef public_62bbfb4
#undef public_62bbfbb
#undef public_62bbfbd

#pragma init_seg(compiler)
extern "C" void const* const public_62bbe8c = __AsmFindLabelExport(&internal_62bbe70, 0x62bbe8c);
extern "C" void const* const public_62bbef5 = __AsmFindLabelExport(&internal_62bbe70, 0x62bbef5);
extern "C" void const* const public_62bbf59 = __AsmFindLabelExport(&internal_62bbe70, 0x62bbf59);
extern "C" void const* const public_62bbf71 = __AsmFindLabelExport(&internal_62bbe70, 0x62bbf71);
